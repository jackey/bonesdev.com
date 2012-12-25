<?php

require_once libraries_get_path('PHPCrawl').'/classes/phpcrawler.class.php';

class Spider extends PHPCrawler {
    function handlePageData(&$page_data) {
        //parent::handlePageData($page_data);
        dpm($page_data);
    }
}