Add_Cart()
{

	web_url("bodgeit", 
		"URL=http://35.196.208.144:8181/bodgeit/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	lr_start_transaction("Addcart_transaction");

	web_link("Doodahs", 
		"Text=Doodahs", 
		"Snapshot=t5.inf", 
		LAST);

	web_link("Zip a dee doo dah", 
		"Text=Zip a dee doo dah", 
		"Snapshot=t6.inf", 
		LAST);

	web_submit_form("basket.jsp", 
		"Snapshot=t7.inf", 
		ITEMDATA, 
		LAST);

	web_link("Widgets", 
		"Text=Widgets", 
		"Snapshot=t8.inf", 
		LAST);

	web_link("Complex Widget", 
		"Text=Complex Widget", 
		"Snapshot=t9.inf", 
		LAST);

	web_submit_form("basket.jsp_2", 
		"Snapshot=t10.inf", 
		ITEMDATA, 
		LAST);

	web_link("About Us", 
		"Text=About Us", 
		"Snapshot=t11.inf", 
		LAST);

	web_link("Gizmos", 
		"Text=Gizmos", 
		"Snapshot=t12.inf", 
		LAST);

	web_link("Whatchamacallits", 
		"Text=Whatchamacallits", 
		"Snapshot=t13.inf", 
		LAST);

	web_link("Contact Us", 
		"Text=Contact Us", 
		"Snapshot=t14.inf", 
		LAST);

	web_link("Gizmos_2", 
		"Text=Gizmos", 
		"Snapshot=t15.inf", 
		LAST);

	web_link("Doodahs_2", 
		"Text=Doodahs", 
		"Snapshot=t16.inf", 
		LAST);

	web_link("Gizmos_3", 
		"Text=Gizmos", 
		"Snapshot=t17.inf", 
		LAST);

	web_link("GZ ZX3", 
		"Text=GZ ZX3", 
		"Snapshot=t18.inf", 
		LAST);

	web_link("Gizmos_4", 
		"Text=Gizmos", 
		"Ordinal=1", 
		"Snapshot=t19.inf", 
		LAST);

	web_link("GZ XT4", 
		"Text=GZ XT4", 
		"Snapshot=t20.inf", 
		LAST);

	web_link("Gizmos_5", 
		"Text=Gizmos", 
		"Ordinal=1", 
		"Snapshot=t21.inf", 
		LAST);

	web_link("GZ FZ8", 
		"Text=GZ FZ8", 
		"Snapshot=t22.inf", 
		LAST);

	web_link("Gizmos_6", 
		"Text=Gizmos", 
		"Ordinal=1", 
		"Snapshot=t23.inf", 
		LAST);

	web_link("GZ K77", 
		"Text=GZ K77", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("product.jsp", 
		"URL=http://35.196.208.144:8181/bodgeit/product.jsp?typeid=6", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.196.208.144:8181/bodgeit/product.jsp?prodid=25", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://10.28.14.56/vshoc/css/css.ashx?t=login&l=1033", "Referer=http://10.28.14.56/vshoc/default.aspx", ENDITEM, 
		LAST);

	web_link("Bonzo dog doo dah", 
		"Text=Bonzo dog doo dah", 
		"Snapshot=t30.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_submit_form("basket.jsp_3", 
		"Snapshot=t31.inf", 
		ITEMDATA, 
		LAST);

	web_link("Doodahs_3", 
		"Text=Doodahs", 
		"Snapshot=t32.inf", 
		LAST);

	web_link("Doo dah day", 
		"Text=Doo dah day", 
		"Snapshot=t33.inf", 
		LAST);

	web_submit_form("basket.jsp_4", 
		"Snapshot=t34.inf", 
		ITEMDATA, 
		LAST);

	web_link("Thingamajigs", 
		"Text=Thingamajigs", 
		"Snapshot=t35.inf", 
		LAST);

	web_link("TGJ AAA", 
		"Text=TGJ AAA", 
		"Snapshot=t36.inf", 
		LAST);

	web_submit_form("basket.jsp_5", 
		"Snapshot=t37.inf", 
		ITEMDATA, 
		LAST);

	web_link("Doodahs_4", 
		"Text=Doodahs", 
		"Snapshot=t38.inf", 
		LAST);

	web_link("Gizmos_7", 
		"Text=Gizmos", 
		"Snapshot=t39.inf", 
		LAST);

	web_link("Thingamajigs_2", 
		"Text=Thingamajigs", 
		"Snapshot=t40.inf", 
		LAST);

	web_link("TGJ GGG", 
		"Text=TGJ GGG", 
		"Snapshot=t41.inf", 
		LAST);

	web_submit_form("basket.jsp_6", 
		"Snapshot=t42.inf", 
		ITEMDATA, 
		LAST);

	web_link("Thingamajigs_3", 
		"Text=Thingamajigs", 
		"Snapshot=t43.inf", 
		LAST);

	web_link("TGJ ABB", 
		"Text=TGJ ABB", 
		"Snapshot=t44.inf", 
		LAST);

	web_submit_form("basket.jsp_7", 
		"Snapshot=t45.inf", 
		ITEMDATA, 
		LAST);

	web_link("Thingies", 
		"Text=Thingies", 
		"Snapshot=t46.inf", 
		LAST);

	web_link("Thingie 1", 
		"Text=Thingie 1", 
		"Snapshot=t47.inf", 
		LAST);

	web_submit_form("basket.jsp_8", 
		"Snapshot=t48.inf", 
		ITEMDATA, 
		LAST);

	web_link("Whatsits", 
		"Text=Whatsits", 
		"Snapshot=t49.inf", 
		LAST);

	web_link("Whatsit feel like", 
		"Text=Whatsit feel like", 
		"Snapshot=t50.inf", 
		LAST);

	web_submit_form("basket.jsp_9", 
		"Snapshot=t51.inf", 
		ITEMDATA, 
		LAST);
	
	lr_end_transaction("Addcart_transaction", LR_AUTO);

	return 0;
}