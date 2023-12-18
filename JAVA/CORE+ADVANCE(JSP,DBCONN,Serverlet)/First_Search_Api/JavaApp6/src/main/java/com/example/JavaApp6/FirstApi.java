package com.example.JavaApp6;
import org.springframework.web.bind.annotation.GetMapping;
//import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;
@RestController

public class FirstApi {
	@GetMapping("/hi")
	public String show() {
		return "Hello GFG";
	}
}
@RestController
 class SecondApi{
	@GetMapping("/search")
	public String search(@RequestParam String q) {
		DB db=new DB();
		return db.search(q);
		
		
	
}
	

}
