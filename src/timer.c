	
	/** 
     start_t = 0
	 start_t =clock();
	 charra_log_info("[TIME] start time %ld secs", start_t);
	
    
    end_t =clock();
    charra_log_info("[TIME] end time %ld secs", end_t);
	total_t = (double)(end_t - start_t)/CLOCKS_PER_SEC;
	charra_log_info("[TIME] charra_load_tpm2_key and Quate total time %f secs", total_t);

// Measure the time taken for charra_unmarshal_attestation_request
	// t = clock();
	// charra_r = charra_unmarshal_attestation_request(data_len, data, &req);
	// t = clock() - t;
	// time_taken = ((double)t) / CLOCKS_PER_SEC;
	// total_func = total_func + (double)t;
	// charra_log_info("[TIME] charra_unmarshal_attestation_request() took %f secs", time_taken);
    */



// tpm2_pcrread sha256:0,2,3


//SHA256_DATA=`echo "CRITICAL-DATA" | openssl dgst -sha256 -binary | xxd -p -c 32`
//tpm2_pcrextend 2:sha256=$SHA256_DATA