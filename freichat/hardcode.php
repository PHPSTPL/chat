<?php
/* Data base details */
$con = 'mysql';
$username='root';
$password='';
$client_db_name='freichat';
$host='localhost';
$driver='Custom';
$db_prefix='fr';
$uid='50ae3f0b7a2be';

$PATH = 'freichat/'; // Use this only if you have placed the freichat folder somewhere else
$installed=true;
$admin_pswd='111111';

$debug = false;

/* email plugin */
$smtp_username = '';
$smtp_password = '';



/* Custom driver */
$usertable='login'; //specifies the name of the table in which your user information is stored.
$row_username='root'; //specifies the name of the field in which the user's name/display name is stored.
$row_userid='loginid'; //specifies the name of the field in which the user's id is stored (usually id or userid)
$avatar_field_name = 'avatar';