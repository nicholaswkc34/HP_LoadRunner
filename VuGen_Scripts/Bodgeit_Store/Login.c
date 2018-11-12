Login()
{

	web_url("bodgeit", 
		"URL=http://35.196.208.144:8181/bodgeit/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("login.jsp", 
		"URL=http://35.196.208.144:8181/bodgeit/login.jsp", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.196.208.144:8181/bodgeit/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_submit_form("login.jsp_2", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		"Name=username", "Value=peterapiit@gmail.com", ENDITEM, 
		"Name=password", "Value=wlx_4046", ENDITEM, 
		LAST);

	return 0;
}