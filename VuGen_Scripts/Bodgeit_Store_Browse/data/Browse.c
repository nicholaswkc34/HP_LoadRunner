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

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=68", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ServiceProxy", 
		"URL=http://intranet.ncsglobaltech.com:81/ePQS/Main/ServiceProxy", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://intranet.ncsglobaltech.com:81/ePQS/Invoice/InvoiceRequestList", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"Source\":\"Main\",\"MethodName\":\"SyncUserInfo\",\"Parameter\":\"\"}", 
		LAST);

	web_custom_request("ServiceProxy_2", 
		"URL=http://intranet.ncsglobaltech.com:81/ePQS/Main/ServiceProxy", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://intranet.ncsglobaltech.com:81/ePQS/Invoice/InvoiceRequestList", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"Source\":\"UserRoleAccess\",\"MethodName\":\"GetAccessList\",\"Parameter\":\"{\\\"UserID\\\": \\\"f91965781034951c2a32ec5cc579183bd47ef2f34741\\\", \\\"rootPath\\\": \\\"/ePQS\\\"}\"}", 
		LAST);

	web_custom_request("ServiceProxy_3", 
		"URL=http://intranet.ncsglobaltech.com:81/ePQS/Main/ServiceProxy", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://intranet.ncsglobaltech.com:81/ePQS/Invoice/InvoiceRequestList", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"Source\":\"Invoice\",\"MethodName\":\"GetInvoiceRequestListUserAccess\",\"Parameter\":\"{\\\"UserID\\\":\\\"f91965781034951c2a32ec5cc579183bd47ef2f34741\\\"}\"}", 
		EXTRARES, 
		"Url=http://10.28.14.56/vshoc/css/css.ashx?t=login&l=1033", "Referer=http://10.28.14.56/vshoc/default.aspx", ENDITEM, 
		LAST);

	lr_start_transaction("1_transaction");

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

	lr_end_transaction("1_transaction",LR_AUTO);

	return 0;
}