Action()
{
	lr_start_transaction("01_AP1_TEST");

	web_rest("GET: https://reqres.in/api/users",
		"URL=https://reqres.in/api/users",
		"Method=GET",
		"Snapshot=t333686.inf",
		HEADERS,
		"Name=x-api-key", "Value= reqres-free-v1", ENDHEADER,
		LAST);

	lr_end_transaction("01_AP1_TEST", LR_AUTO);


	return 0;
}
