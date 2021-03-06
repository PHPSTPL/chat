<?php //-*-php-*-
/*   ********************************************************************   **
**   Copyright notice                                                       **
**                                                                          **
**   (c) 1995-2002 PHPOpenChat Development Team                             **
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
  $Date: 2003/08/19 18:54:07 $
  $Source: /cvsroot/phpopenchat/chat3/include/languages/tr.inc,v $
  $Revision: 1.1.2.1 $
*/

/**
* turkish language file
*
* defines constants for an english language interface
*
* @author ScriptEvi.com <webmaster@scriptevi.com> http://www.scriptevi.com
* @version $Id: tr.inc,v 1.1.2.1 2003/08/19 18:54:07 letreo Exp $
*/

/* * * * * * * * * * CHAT MODULE * * * * * * * * * */
define('CHARACTER_ENCODING','ISO-8859-9');

/**
* title for html header
*/
define('TITLE','PHPOpenChat');

/**
* used within index.php
*/
define('WELCOME','PHPOpenChat - Oturumuna Ho� Geldiniz');
define('INTRO','Bu bir chat d�r, kat�lmadan �nce mutlaka <a href="netiquette.php">kurallar�</a> okumal�s�n�z!');
define('GREETING','Seni tekrar g�rmek g�zel!');
define('LOGIN_WELCOME','daha fazla se�enekler i�in �st sa� k��edeki bir sohbet edene t�klay�n.');
define('NICKNAME','Kullan�c� Ad�');
define('PASSWORD','�ifre');
define('CHANNEL','Kanal');
define('LOGIN','Giri�');
define('GO','Git');
define('EXIT_CHAT','Chatdan ��k');
define('FORGOT_PASSWORD','�ifrenizi mi kaybettiniz?');
define('STORE_ACCOUNT_DATA','hesap bilgisini sakla');

/**
* used within chat output/input interface
*/
define('LEAVES_THE_CHAT','sohbetten ayr�ld�.');
define('LEAVES_THIS_CHANNEL','kanaldan ayr�ld�.');
define('IS_TOO_BUSY','�ok me�gul');//nickname in front
define('IS_NOT_ONLINE','online de�il');
define('JOINS_THIS_CHANNEL','kat�ld��� kanal.');
define('JOINS_THE_CHAT','sohbete kat�ld�.');
define('SAYS_TO','s�yledikleri');
define('WHISPERS_TO','f�s�ldad�klar�');
define('SAY_TO','s�yledi�i');
define('WHISPER_TO','f�s�ldad���');
define('EVERYBODY','herkes');
define('INVITATION_MESSAGE','�zel bir kanala davet edildiniz! L�tfen kanala gidin:');//a channel name follows
define('SPEAK_TO','konu�tu�u');
define('WHISPERED','f�s�lda');
define('OUTPUT_FILTER','��kt� filitresi');
define('PRIVATE','sadece �zel metin');
define('BODIES','sadece dostlar');
define('SYSTEM_MESSAGES','Sistem mesajlar� yok');
define('IGNORE','�nemseme');
define('INVITE','Davet');
define('CONFIGURE','G�r�n�m');
define('HELP','Yard�m');
define('INFO','Bilgi');
define('GUESTS','Misafir');
define('EMAIL_US','Email g�nder');
define('NOTE_ABOUT','Hakk�ndaki Not');
define('ICON_LIST','Smiley-Listesi');
define('CHOOSE_CHANNEL','Kanal se�in');
define('CHOOSE_RECIPIENT','Al�c� se�in');
define('ADD_TO_FRIENDLIST','dost listesine ekle');
define('NO_CLICKETY_CLICK','G�nderme butonuna t�klayaca��n�za emin olun.');
define('LINE_HAS_BEEN_SENT_TO','Hatt�n�zn g�nderildi�i kullan�c�:');//nickname follows
define('FULL','full');
define('UNLOCK_CHANNEL','a��k kanal');//channel name follows
define('YOU_HAVE_NEW_MAIL','Yeni mail ald�n�z!');
define('LOGOUT_SHORTLY','Aktif olmad���n�zdan dolay� k�sa bir sonra '.CHAT_NAME.' dan ��kar�lacaks�n�z. Yenilemek istermisiniz?');

/**
* used within ignore-dialog
*/
define('IGNORED','�nemsenmedi');
define('IGNORE_CHATTERS','Sohbet�ileri �nemseme');
define('IGNORED_CHATTER','�nemsenmeyen sohbet�i');
define('IGNORE_CHATTER','sohbet�iyi �nemseme');
define('UNIGNORE_CHATTER','sohbet�iyi �nemse');
define('UNIGNORED_CHATTER','�nemsenen sohbet�i');
define('HINT_IGNORE_CHATTERS','Rahats�z edenleri buradan �nemsemeyebilirsiniz.');

/**
* used within invite-dialog
*/
define('INVITE_CHATTERS','Sohbet�ileri davet et');
define('INVITED_CHATTERS','davet edilen sohbet�i');
define('INVITE_CHATTER','sohbet�i davet et');
define('DISINVITE_CHATTER','sohbet�i davetini reddet');
define('DISINVITED_CHATTERS','davet edilmeyen sohbet�i');
define('HINT_INVITE_CHATTERS','�ayet kendi kanal�n ile �zel g�r��mek istersen, davet etti�in birisine kanal�na giri� yetkisi vermelisin.');

/**
* used within friends-dialog
*/
define('FRIENDS','Dostlar');
define('ALL_CHATTERS','b�t�n sohbet�iler');
define('ADD_TO_FRIENDS','Dostlara ekle');
define('DEL_FRIEND','Dost kald�r');
define('HINT_ADD_FRIENDS','Bu diyalog i�in arkada�lar�n� dostlar listene eklemelisin.');

/**
* used within mail-dialog
*/
define('MAIL','Mail');
define('INBOX','Gelen Kutusu');
define('OUTBOX','Giden Kutusu');
define('TRASH','��p');
define('COMPOSE','Yaz');
define('REPLY','Yan�tla');
define('FORWARD','�let');
define('SUBJECT','Konu');
define('BODY','Mesaj');
define('SEND','G�nder');
define('MAIL_SEND_HINT','Not: "'.SEND.'" butonu sadece Al�c� alan�n� mevcut kullan�c� adlar�yla doldurdu�unuzda �al���r.!');
define('RECIPIENT_HINT','Birden fazla al�c�lar varsa virg�l ile ay�r�n�z.');
define('MOVE_TO_TRASH','��pe ta��');
define('GET_MAIL','Yeni mesajlar� al');
define('DELETE_MAIL','Mail Sil');
define('SENDER','G�nderen');
define('RECIPIENT','Al�c�');
define('MAIL_SEND_DATE','G�nderme tarihi');
define('MAIL_RECEIVED','al�nma');
define('LAST_TOUCH_RECIPIENT','Okunma do�rulamas�');
define('LAST_TOUCH_SENDER','son ba�lant�');
define('NO_FRIENDS_FOUND','dostlar bulunamad�');
define('NO_SUCH_RECIPIENT_FOUND','Bir al�c� bulunamad�.');
define('BODY_TO_SHORT','The content of your mail is to short.');

/**
* used within help-dialog
*/
define('HELP_TITLE','Chat-Yard�m');
define('HELP_HINT','�neri: Bu pencereden ayr�l�n, chat ve komutlar i�in buraya bak�n');
define('HELP_SUBTITLE1','Manual');
define('HELP_TEASER1','Biz burada size chat\'�n basit i�levlerini g�stermek istiyoruz!');
define('HELP_CHANNEL','Kanal: Mevcut kanallar aras�ndaki de�i�iklik');
define('HELP_SPEAK','Bu kutu /"f�s�ldad�": Sohbet�iye do�rudan konu�ma yada f�s�ldamay� sa�lar.');
define('HELP_IGNORE','�nemseme Men�s�:Buradan sohbet�ileri �nemsemeyebilirsiniz.');
define('HELP_INVITE','Davet Men�s�: Sohbet�ileri �zel kanal�n�za davet edebilirsiniz..');
define('HELP_FRIENDS','Dostlar Men�s�: Di�er sohbet�ileri arkada� listenize alman�z� sa�lar. Sistem hangi arkada��n�z�n aktif olup olmad���n� size bildirir.');
define('HELP_CONFIGURE','G�r�n�m Men�s�: Bu alanda tercih etti�iniz chat ayaralr�n� de�i�tirebilirsiniz. �rn: renk vb. gibi.');
define('HELP_MAIL','Mail Men�s� : Di�er �yelere mail mesaj� g�ndeip, gelen kutunuzu kontrol edebilirsiniz.');
define('HELP_HELP','Yard�m Men�s�: �u anda ona bak�yorsunuz ...');
define('HELP_SUBTITLE2','IRC-Komutlar�:');
define('HELP_TEASER2','��lemde ...');
define('HELP_SUBTITLE3','Smileys:');
define('HELP_TEASER3','��lemde ...');

define('SMILEY_CODE','Kod');
define('SMILEY_EXPLANATION','A��klama');
define('MORE_SMILEY_CODES','daha �ok kod');
define('OWN_PRIVATE_IMAGE','Profilinize kendi ikonlar�n�z� y�kleyebilirsiniz');
define('RECIPIENT_PRIVATE_IMAGE','Partnerinizin ikonu');

/**
* Registration
*/
define('REGISTRATION','Kay�t');
define('FILLOUT_TO_REGISTER','Kay�t i�in verilerinizi doldurun ve g�nderin');
define('ERROR_NICKNAME','Se�ilen kullan�c� ad� zaten mevcut');
define('ERROR_PASSWORD','�ifre �ok k�sa yada bo� b�rak�ld�');
define('ERROR_NAME','L�tfen ad�n�z� girin');
define('ERROR_USER','Verilen kullan�c� ad� yok');
define('ERROR_EMAIL','Yanl�� format');
define('ERROR_PICTURE_URL','Bu resim bulunamad�');
define('ERROR_COLOR','Yanl�� format');
define('ERROR_MAIL_HOST','�zel hosta bir mail g�nderemezsiniz');
define('NAME','Ad Soyad');
define('EMAIL','E-Mail adresi');
define('REGISTER','Kay�t');
define('PICTURE_URL','Resmin URL si');
define('REGISTRATION_SUCCESSFULLY','Kay�t i�leminiz ba�ar�yla ger�ekle�ti!');
define('LOGIN_NOW','�imdi giri� yapmaya haz�rs�n�z. �ayet giri� sayfas�na y�nlendirilmediyseniz l�tfen a�a��daki linke t�klay�n');
define('CONFIRMATION','Onaylama');
define('STATUS_CONFIRMATION','Status');
define('CONFIRM_SUCCESS','Onaylaman�z ba�ar�l�');
define('CONFIRM_FAILED','Onaylaman�z ba�ar�s�z');
define('CONFIRMATION_MESSAGE','Bizden bir e-mail alacaks�n�z. Kay�t i�leminizin tamamlanmas� i�in l�tfen, bu e-maildeki linke t�klay�n�z!');
define('FORGOT_PASSWORD_HINT','Kullan�c� ad�n�z� doldurun, �ifrenizi i�eren bir email alacaks�n�z.');

/**
* Configuration
*/
define('CONFIGURATION','G�r�n�m');
define('TEXT_COLOR','metin rengi');
define('ADVICE','�neri');
define('QUIET','�nerme');
define('ALERT','popup pencere');
define('SOUND','bir m�zik �al');
define('SCROLL_SPEED','Kayd�rma h�z�');
define('CHOOSE_SCROLL_SPEED','kayd�rma h�z� se�');
define('SCROLL_SPEED_NORMAL','normal');
define('SCROLL_SPEED_FAST','h�zl�');
define('SCROLL_SPEED_FASTER','daha h�zl�');
define('SCROLL_SPEED_OFF','off');
define('SWITCH_OFF_IE_CLICK','Internet Explorer �n ses �zelli�ini kapat�n!');
define('CHOOSE_THEME','Bir theme se�');

/**
* Profile
*/
define('PROFILE','Profilim');
define('PERSONAL_DATA','Ki�isel bilgi');//a nickname follows
define('CHANGE_PROFILE','Profili G�ncelle');
define('PROFILE_UPDATA_SUCCESSFUL','Profiliniz ba�ar�yla g�ncellendi');
define('PROFILE_UPDATA_NOT_SUCCESSFUL','Profiliniz g�ncellenmedi');
define('WRONG_MIME_TYPE','Dosya tipi hatal�');
define('IMG_FILE_TO_BIG','Dosya �ok b�y�k');
define('IMG_SIZE_TO_BIG','Boyutlar �ok b�y�k');
define('SIZE_EXPECTED','Beklenen dosya pixel olarak b�y�kl���:');//a digit follows
define('PRIVATE_IMAGE','�zel Resim');
define('CONFIRMATION_MAIL_SUBJECT','CHAT KAYIT ONAYI');
define('CONFIRMATION_MAIL_BODY','Chat servisimize kay�t olma i�leminizi onayl�yorsan�z a�a��daki linki t�klay�n�z!');
define('ICQ_NUMBER','ICQ Numaras�');
define('ERROR_ICQ_NUMBER','ICQ Numaras� yok');
define('AIM_NICKNAME','AIM Kullan�c� ad�');
define('ERROR_AIM_NICKNAME','AIM Kullan�c� ad� �ok uzun.');
define('YIM_NICKNAME','Yahoo! Instant Messenger kullan�c� ad�');
define('ERROR_YIM_NICKNAME','kullan�c� ad� �ok uzun.');
define('HOMEPAGE_URL','Web Sitesi');
define('ERROR_HOMEPAGE_URL','Web sitesi bulunmad�.');
define('BIRTHDAY','Do�um g�n�');
define('ERROR_BIRTHDAY','yanl�� format');
define('AGE','Ya�');
define('INTERESTS','�lgi alanlar�');
define('ERROR_INTERESTS','�lgi alanlar� dizisi �ok uzun!');
define('MOTTO','Slogan');
define('ERROR_MOTTO','Slogan �ok uzun!');
define('LINES_PER_DAY','G�nl�k sat�r');
define('LOGINS_PER_DAY','G�nl�k giri�');

/**
* Notes
*/
define('CHATTER_NOTES','Notlar�n ait oldu�u sohbet�i');//a nickname follows
define('UPDATE_NOTES','Notlar� g�ncelle');
define('NOTES_UPDATED_SUCCESSFULLY','Notlar�n�z ba�ar�yla g�ncellendi.');
define('HINT_NOTES','Hi�bir di�er sohbet�i notlar�n�z� okuyamaz.');
define('NOTES_NOT_UPDATED','Notlar�n�z g�ncelleyemiyorsunuz, notlar�n�z�n solunda bo�luk olmam�� olabilir.');

/**
* Moderation
*/
define('APPROVE','onayla');
define('DISAPPROVE','onaylama');
define('MESSAGE_FORWARDED_TO_MODERATOR','Mesaj Moderator a iletildi');
define('MODERATOR','Moderator');
define('VIP','VIP');

/**
* Error messages
*/
define('ERROR_WRONG_FORMAT','Yanl�� formatta veri g�nderdiniz.');

/**
* Jumper
*/
define('JUMP_FAILED','Atlama ba�ar�s�z!');
define('JUMP_ERROR_CONTENT','Sitede kabul edilmeyen i�erik bulundu!');
define('JUMP_ERROR_HOST','Host bulunmad�!');

/**
* IRC-Commands related stuff
*/
define('INLINE_HELP','Yard�m');
define('IRC_COMMAND','IRC-Komutlar�');
define('IRC_EXPLANATION','A��klama');
define('IRC_ME','Nickinin yerine ge�sin mi.');
define('IRC_MSG','�zel karakterle bir f�s�lt� mesaj� yolluyor, birde e�er di�er kanaldaysa.');
define('IRC_NICK','�zel karaktele bir mesaj yolla.');
define('IRC_JOIN','Kanal de�i�tir.');
define('IRC_QUERY','�zel karakterle �zel sohbet talebinde bulun, �zel kanal�n�za otomatik davet edebilirsiniz.');
define('IRC_LOCATE','T�m chat da bir sohbet�i ara.');
define('IRC_IGNORE','�nemsenmeyen listenize sohbet�i ekleme.');
define('IRC_UNIGNORE','�nemsenmeyen listenizden sohbet�i ��karma.');
define('IRC_KICK','Belirli sohbet�i atma. Sadece operator taraf�ndan kullan�l�r.');
define('IRC_BAN','�imdiki kanaldan belirli periyot i�in bir sohbet�i Yasakla. Yasa�� kald�rmak i�in "/ban nickname 0"! Sadece oprerator taraf�ndan kullan�labilir.');
define('IRC_HELP','Bu yard�m� yazd�r.');
define('IRC_QUIT','Bu chat oturumunu terket.');
define('LOCATED_AT','yerle�tirilmi�');//a nickname follows, nickname in front of this sentence
define('UNLOCATED','bulunamad�.');//nickname in front of this sentence

/**
* Admin area
*/
define('ADMINISTRATION','Administration');
define('WELCOME_ADMIN','Y�netim Alan�');
define('PUBLIC_CHANNEL','genel');
define('MODERATED_CHANNEL','moderated');
define('PRIVATE_CHANNEL','�zel');
define('CHANNEL_ADMIN','Kanal-Y�netimi');
define('CHATTER_ADMIN','Sohbet�i-Y�netimi');
define('ADD_CHANNEL','Kanal� Yarat');
define('DEL_CHANNEL','Kanal� Sil');
define('UPDATE_CHANNEL','Kanal� G�ncelle');
define('CHATTER_DELETE_SUCCESS','Sohbet�i ba�ar�yla kald�r�ld�.');
define('CHATTER_DELETE_FAILED','Sohbet�i kald�r�lamad�.');
define('GROUP_UPDATE_SUCCESS','Grup-�ye de�i�tirildi.');
define('GROUP_UPDATE_FAILED','Grup-�ye de�i�ikli�i ba�ar�s�z oldu.');
define('CHATTER_DISABLED','Sohbet�i devre d��� kald�');
define('CHATTER_NOT_DISABLED','Bu sohbet�i devre d��� yap�lamad�');
define('CHATTER_ENABLED','Sohbet�i devreye al�nd�');
define('CHATTER_NOT_ENABLED','Bu sohbet�i devreye al�namad�');
define('LAST_CHANNEL','Son kanal');
define('LAST_ACTIVE_TIME','Son g�r�nme');
define('LAST_HOST','son host');
define('LAST_IP','son IP');
define('LAST_REFERER','son referer');
define('LAST_USER_AGENT','last user agent');
define('LAST_SESSIONID','son oturumId');
define('REGTIME','Kay�t zaman�');
define('MOVE_TO_TOP','Ba�a ta��');
define('SUCCESS_CHANNEL_UPDATE','kanal ba�ar�yla g�ncellendi.');
define('ERROR_CHANNEL_UPDATE','kanal g�ncellenemedi.');

/**
* Confirmation messages
*/
define('CONFIRM_IGNORE','Sohbet�i ba�ar�yla �nemsizler listesine eklendi.');
define('CONFIRM_UNIGNORE','Sohbet�i ba�ar�yla �nemsizler listesinden kald�r�ld�.');
define('CONFIRM_INVITE','Sohbet�i ba�ar�yla davet edilidi.');
define('CONFIRM_DISINVITE','Sohbet�i ba�ar�yla reddedildi.');
define('CONFIRM_FRIEND','Sohbet�i ba�ar�yla dostlar listesine eklendi.');

/**
* User page
*/
define('USER_PAGE','�ye sayfas�');
define('USER_SINCE','�yelik ba�lang�c�');//a time statement follows
define('LAST_SEEN','son g�r�nmesi');//a time statement follows

/**
* Regulars' table
*/
define('REGULARS',"D�zenli liste");
define('REGULARS_HINT','Burada her derecede en �ok aktif olan sohbet�ileri g�r�yorsunuz.');
define('SINCE_REGISTRATION','kay�ttan sonra');
define('NOT_FOUND','bulunamad�');
define('RANK','�st�ndeki derece');
define('ONLINE_TIME','�st�ndeki online g�nler');
define('ACCOUNT_DATA','Hesap verisi');
define('INDIVIDUAL_DATA','Ki�isel veri');

/**
* right click menu within the output frame
*/
define('PRIVATE_CHAT_NEW_WINDOW','�zel sohbet');

/**
* Who is online window
*/
define('WHO_IS_ONLINE','Kim online?');
define('CHANGE_CHANNEL','kanal de�i�tir');
define('SELECT_NICK','kullan�c� ad�n� se�');
define('OPEN_USER_PAGE','�ye sayfas�n� a�');
define('HINT_WHO_IS_ONLINE','Bu chat daki t�m sohbet�ileri buradan bulabilirsiniz. Chat yapmak yada kanala ba�lanmak i�in ikonlar� kullan�n�z.');

/**
* Password reminder
*/
define('FORGOT_PASSWD_MAIL_SUBJECT',' '.TITLE.' Giri� �ifreniz');
define('FORGOT_PASSWD_MAIL_BODY','Bu mesaj�n size g�nderilme nedeni
bize '.TITLE.' �ifrenizi kaybetti�inizi bildirdiniz i�indir.');
define('HINT_REG_PASSWORD','�ifreniz en az '.PASSWORD_MIN_LENGTH.' karakter uzunlu�unda olmal�d�r.');
define('HINT_REG_NICKNAME','Nickiniz harf ve rakamlardan olu�mal�d�r.');
define('YOUR_PASSWORD_IS','�ifreniz:');//a password follows
define('FORGOT_PASSWD_MAIL_HINT','
');
define('RETRIEVE_PASSWORD','�ifrenizi geri al�n');

/**
* Statistics
*/
define('STATISTICS','�statistikler');
define('ONLINE_COUNT_LAST24h','Son 24 sa. de online olanlar');
define('ONLINE_TIME_AVG','Dakika cinsinden Online g�nl�k ortalama');
define('REGISTERED_COUNT','Kay�tl� sohbet eden say�s�');
define('LAST_REGISTERED','Son kay�t olan sohbet eden');
define('MAIL_COUNT','Mail say�s�');
define('UNRED_MAILS','okunmam�� mailler');
define('MAIL_COUNT_LAST_24h','Son 24 sa. deki Mail say�s�');

/**
* context sesitive help
*/
define('HINT_PASSWORD','BIZDEN MAIL ALMAK I�IN SIFRENIZI GIRINIZ. MISAFIRLER I�IN BU ALAN BOS BIRAKILMALIDIR.');
define('HINT_NICKNAME','KENDINIZE AIT KULLANICI ADI ILE KAYIT OLMALISINIZ. ZIYARET�I GIRISI I�IN BU ALANI BOS BIRAKABILIRSINIZ.');
define('HINT_CHANNELS','�� �ESIT KANAL VARDIR, <em>moderated</em>, <em>genel</em> VE <em>�zel</em>. GENEL KANALLARDA SATIRLAR DIREKT OLARAK G�R�N�R, MODERATED KANALLARDA MODERAT�R TARAFINDAN BELIRLENIR, �ZEL KANALLAR SADECE GIRIS YAPILINCA G�R�N�R.');
define('INFO_RANKING','E�er kullan�m oran�n�z belli bir d�zeye ula�m�� ise gelecekte kullan�m oran�n�z belli s�n�rlar�n alt�na d��medi�i s�rece �nerilebilirsiniz.');
define('HINT_ADVICE_QUIET','Bu opsiyon se�ildi�inde yorgun oldu�unuz belirtir.');
define('HINT_ADVICE_ALERT','Bu �zellik se�ilirse yorgun oldu�unuzu belirtmek i�in k���k <strong>pop up pencere</strong> a��l�r.');
define('HINT_ADVICE_SOUND','Bu �zellik se�ilirse yorgun oldu�unuzu belirtmek i�in sesli uyar� verir.');

/**
* Guestbook
*/
define('GUESTBOOK','Ziyaret�i Defteri');
define('GUESTBOOK_NEW_ENTRY','Ziyaret�i Defterine yaz');
define('GUESTBOOK_ENTRY_SAVED','Ziyaret�i Defterine yazd���n�z ba�ar�yla kaydedildi');

/**
* Generic
*/
define('GUEST_NICK_PREFIX','Misafir');
define('ALL_GUESTS','Misafirler');
define('SUBMIT','Tamam');
define('CANCEL','Vazge�');
define('SEARCH','Ara');
define('SEARCH_RESULTS','arama sonu�lar�');
define('ALERT_NEW_LINE','Birisi sizinle sohbet etmek istiyor');
define('CLOSE_WINDOW','Pencereyi kapat');
define('GOTO_HOME','Ana Sayfaya git');
define('CONTACT_HINT','E�ER sorular�n�z varsa, l�tfen bize y�neltin!');
define('REALLY_QUESTION','Eminmisiniz?');
define('CHATTER','Sohbet eden');
define('OPERATOR','Operat�r');
define('ADMIN_HINT','Chat �n�z� y�netmek i�in "operator" olarak giri� yap�n ve men�leri g�steren input-frame deki "'.ADMINISTRATION.'" linkine t�klay�n.');
define('IMPORTANT','�nemli');
define('OPERATOR_PASSWORD','Operat�r-�ifresi');
define('MAKE_NOTE','L�tfen operat�r �ifrenizi not edin');
define('RESTRICT','Kullan�c� adlar� ara');
define('DENIED_FOR_GUESTS','Misafirler bu servisten yararlanamaz!');
define('BANNED_MSG','Kanala giri�iniz yasakland� ve �zel kalandanda at�ld�n�z.');
define('CHATTER_COUNT','Online sohbet eden');//a digit follows
define('HIDE','gizle');
define('GENDER','Cinsiyet');
define('GENDER_NOTE','Bir cinsiyeti sadece bir defa se�melisiniz!');
define('FEMALE','bayan');
define('MALE','erkek');
define('PAGE_VIEWS','Sayfa G�r�nt�lenmesi');
define('GRADE','Derece');
define('GRADE_ROOKIE','Acemi');
define('GRADE_MEMBER','�ye');
define('GRADE_REGULAR','Devaml�');
define('GRADE_ELITE','Se�kin-Sohbet�i');
define('GRADE_OPERATOR','Operator/Admin');
define('YOU_ARE_BUSY','�zel pencerede zaten ba�ka birisiyle konu�uyorsunuz!');
define('CHATTER_IS_BUSY','Ne yaz�kki bu sohbet�i sizinle sohbet edemiyor, kendisi �ok me�gul.');
define('WANTS_TO_TALK','seninle g�r��mek istiyor!');//nickname in front of this
define('DAYS','Tage');
define('CHAT','Sohbet');
define('CHATMAIL','Sohbet-Mail');
define('NICKNAME_NOT_FOUND','Belirtilen kullan�c� ad� bulunamad�.');
define('PASSWORD_HAS_BEEN_SENT','�ifre g�nderildi');
define('CHOOSE_LANGUAGE','Di�er lisan');
define('OPTIONAL','opsiyonel');
define('MISCELLANEOUS','�e�itli');
define('SAVE','Kaydet');
define('DELETE','Sil');
define('EDIT','D�zenle');
define('CREATE_NEW','yeni yarat');
define('JS_ALERT','L�tfen JavaScript\'i aktif edin');
define('HAPPY_BIRTHDAY','Mutlu Y�llar!');
define('CHOOSEN','se�im');

/**
 * PostNuke related
 */
define('PN_NOT_LOGGED_IN','Chat-Giri�i ba�ar�s�z!');
define('PN_HINT_NOT_LOGGED_IN','�nce giri� yap�p, chata kat�l�n!');
?>