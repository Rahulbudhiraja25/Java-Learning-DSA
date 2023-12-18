package com.example.JavaApp6;

import java.util.HashMap;

public class DB {
	HashMap<String,String> data=new HashMap<>();
	public DB() {
		data.put("Sachin","A good Cricketer");
		data.put("GFG","A Good Website For Learning");
		data.put("Rahul","Person who created this Api");
	}
	
public String search(String q) {
	if(data.containsKey(q)) {
		return data.get(q);
	}
	else {
		return "Key not Found";
	}
}
}


