Browse()
{

	web_url("bodgeit", 
		"URL=http://35.196.208.144:8181/bodgeit/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", ENDITEM, 
		LAST);

	lr_rendezvous("peak_browse");
	lr_start_transaction("browse_transaction");

	web_url("product.jsp", 
		"URL=http://35.196.208.144:8181/bodgeit/product.jsp?typeid=6", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.196.208.144:8181/bodgeit/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_link("About Us", 
		"Text=About Us", 
		"Snapshot=t8.inf", 
		LAST);

	web_link("Scoring page", 
		"Text=Scoring page", 
		"Snapshot=t9.inf", 
		LAST);

	web_link("Gizmos", 
		"Text=Gizmos", 
		"Snapshot=t10.inf", 
		LAST);

	web_link("Thingamajigs", 
		"Text=Thingamajigs", 
		"Snapshot=t11.inf", 
		LAST);

	web_link("Whatchamacallits", 
		"Text=Whatchamacallits", 
		"Snapshot=t12.inf", 
		LAST);

	web_link("Thingies", 
		"Text=Thingies", 
		"Snapshot=t13.inf", 
		LAST);

	web_link("Your Basket", 
		"Text=Your Basket", 
		"Snapshot=t14.inf", 
		LAST);

	web_link("Search", 
		"Text=Search", 
		"Snapshot=t15.inf", 
		LAST);

	web_submit_form("search.jsp", 
		"Snapshot=t16.inf", 
		ITEMDATA, 
		"Name=q", "Value=", ENDITEM, 
		LAST);

	web_link("Widgets", 
		"Text=Widgets", 
		"Snapshot=t17.inf", 
		LAST);

	web_link("About Us_2", 
		"Text=About Us", 
		"Snapshot=t18.inf", 
		LAST);

	web_link("Contact Us", 
		"Text=Contact Us", 
		"Snapshot=t19.inf", 
		LAST);

	web_link("Login", 
		"Text=Login", 
		"Snapshot=t20.inf", 
		LAST);

	web_link("Register", 
		"Text=Register", 
		"Snapshot=t21.inf", 
		LAST);

	lr_end_transaction("browse_transaction",LR_AUTO);

	return 0;
}