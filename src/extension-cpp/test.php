<?php
extension_loaded('deep_client_php_extension') or dl('deep_client_php_extension.so');

$token = "your_token";
$url = "your_url";

$client = new MyNamespace\DeepClient($token, $url);
$result = $client->select(/*...*/);  // Вызов метода select
?>
