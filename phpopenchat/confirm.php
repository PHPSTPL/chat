<?php //-*-php-*-
/*   ********************************************************************   **
**   Copyright notice                                                       **
**                                                                          **
**   (c) 1995-2004 PHPOpenChat Development Team                             **
**   http://phpopenchat.sourceforge.net/                                    **
**                                                                          **
**   All rights reserved                                                    **
**                                                                          **
**   This script is part of the PHPOpenChat project. The PHPOpenChat        **
**   project is free software; you can redistribute it and/or modify        **
**   it under the terms of the GNU General Public License as published by   **
**   the Free Software Foundation; either version 2 of the License, or      **
**   (at your option) any later version.                                    **
**                                                                          **
**   The GNU General Public License can be found at                         **
**   http://www.gnu.org/copyleft/gpl.html.                                  **
**   A copy is found in the textfile GPL and important notices to the       **
**   license from the team is found in the textfile LICENSE distributed     **
**   with these scripts.                                                    **
**                                                                          **
**   This script is distributed in the hope that it will be useful,         **
**   but WITHOUT ANY WARRANTY; without even the implied warranty of         **
**   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          **
**   GNU General Public License for more details.                           **
**                                                                          **
**   This copyright notice MUST APPEAR in all copies of the script!         **
**   ********************************************************************   */

/*
  $Author: letreo $
  $Date: 2004/08/10 09:48:14 $
  $Source: /cvsroot/phpopenchat/chat3/confirm.php,v $
  $Revision: 1.5.2.5 $
*/

//Get default values
require_once('config.inc.php');
if( !SEND_CONFIRMATION_MAIL )
  die('You do not need to confirm your registration!');
  
require_once(POC_INCLUDE_PATH.'/adodb/adodb.inc.php');
require_once(POC_INCLUDE_PATH.'/class.Chat.inc');
require_once(POC_INCLUDE_PATH.'/class.Translator.inc');
require_once(POC_INCLUDE_PATH.'/class.Template.inc');

session_start();

$TEMPLATE_OUT['meta_refresh'] = '';

if ( !isset($_SESSION['chat']) )
{
	$chat = &new POC_Chat(CHAT_NAME, $supported_languages);
	$_SESSION['chat'] = $chat;
}
if ( !isset($_SESSION['translator']) )
{
	$translator = &new POC_Translator( $_SESSION['chat']->get_language() );
	$_SESSION['translator'] = $translator;
}
if ( !isset($_SESSION['template']) )
{
	$template = &new POC_Template();
	$_SESSION['template'] = $template;
}

if( isset($_GET['code']) )
{
  $_SESSION['chat']->connect();
   if( $_SESSION['chat']->confirm( $_GET['code'] ) )
   {
     $TEMPLATE_OUT['confirmation_message'] = '<span class="success">'.$_SESSION['translator']->out('CONFIRM_SUCCESS').'</span>';
     $TEMPLATE_OUT['meta_refresh'] = '<meta http-equiv="refresh" content="5; url=\'index.php\'" />';
   }
   else
   {
     $TEMPLATE_OUT['confirmation_message']  = '<span class="error">'.$_SESSION['translator']->out('CONFIRM_FAILED').'</span>';
     $TEMPLATE_OUT['confirmation_message'] .= '<br /><a href="mailto:'.ADMIN_MAIL_ADDRESS.'">'.CONTACT_HINT.'</a>';
   }
  $_SESSION['chat']->disconnect();
}
unset($_SESSION['chat']);
$_SESSION['template']->get_template();
?>