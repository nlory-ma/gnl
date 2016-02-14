<?php
/* unset($_SERVER['PHP_AUTH_USER']); */
if ((!($_SERVER['PHP_AUTH_USER'])) || (!($_SERVER['PHP_AUTH_PW'])))
{
	header('WWW-Authenticate: Basic realm="Espace membres"');
	header('HTTP/1.0 401 Unauthorized');
	echo "<html><body>Cette zone est accessible uniquement aux membres du site</body></html>";
	exit;
}
else if (($_SERVER['PHP_AUTH_USER']) && ($_SERVER['PHP_AUTH_PW']))
{
	if (($_SERVER['PHP_AUTH_USER'] != "zaz") || ($_SERVER['PHP_AUTH_PW'] != "jaimelespetitsponeys"))
	{
		header('WWW-Authenticate: Basic realm="Espace membres"');
		header('HTTP/1.0 401 Unauthorized');
		echo "<html><body>Cette zone est accessible uniquement aux membres du site</body></html>\n";
		exit;
	}
	else if (($_SERVER['PHP_AUTH_USER'] == "zaz") || ($_SERVER['PHP_AUTH_PW'] == "jaimelespetitsponeys"))
	{
		echo "<html><body>\n";
		$image = base64_encode(file_get_contents("../img/42.png"));
		$src = 'data: image/png;base64,'.$image;
		echo "Bonjour Zaz<br />\n";
		echo "<img src='",$src,"'>\n";
		echo "</body></html>";
		echo "\n";
		exit;
	}
}
?>
