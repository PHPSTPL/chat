
DROP TABLE IF EXISTS ajax_chat_online;
CREATE TABLE ajax_chat_online (
	userID INT(11) NOT NULL,
	userName VARCHAR(64) NOT NULL,
	userRole INT(1) NOT NULL,
	channel INT(11) NOT NULL,
	dateTime DATETIME NOT NULL,
	ip VARBINARY(16) NOT NULL,
	PRIMARY KEY (userID),
	INDEX (userName)
) DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

DROP TABLE IF EXISTS ajax_chat_messages;
CREATE TABLE ajax_chat_messages (
	id INT(11) NOT NULL AUTO_INCREMENT,
	userID INT(11) NOT NULL,
	userName VARCHAR(64) NOT NULL,
	userRole INT(1) NOT NULL,
	channel INT(11) NOT NULL,
	dateTime DATETIME NOT NULL,
	ip VARBINARY(16) NOT NULL,
	text TEXT,
	PRIMARY KEY (id),
	INDEX message_condition (id, channel, dateTime),
	INDEX (dateTime)
) DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

DROP TABLE IF EXISTS ajax_chat_bans;
CREATE TABLE ajax_chat_bans (
	userID INT(11) NOT NULL,
	userName VARCHAR(64) NOT NULL,
	dateTime DATETIME NOT NULL,
	ip VARBINARY(16) NOT NULL,
	PRIMARY KEY (userID),
	INDEX (userName),
	INDEX (dateTime)
) DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

DROP TABLE IF EXISTS ajax_chat_invitations;
CREATE TABLE ajax_chat_invitations (
	userID INT(11) NOT NULL,
	channel INT(11) NOT NULL,
	dateTime DATETIME NOT NULL,
	PRIMARY KEY (userID, channel),
	INDEX (dateTime)
) DEFAULT CHARSET=utf8 COLLATE=utf8_bin;



DROP TABLE IF EXISTS `spoon`.`votes` ;

CREATE TABLE `spoon`.`votes` (
`id` int( 10 ) unsigned NOT NULL AUTO_INCREMENT ,
`user_id` int( 11 ) NOT NULL DEFAULT '0',
`channel_id` int( 11 ) DEFAULT '0',
`msg_id` int( 11 ) NOT NULL DEFAULT '0',
`active` int( 1 ) DEFAULT 1 ,
`created_on` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ,
PRIMARY KEY ( `id` )
) ENGINE = MYISAM DEFAULT CHARSET = latin1;