package com.mkRahul;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class AddServelet extends HttpServlet{
	public void service(HttpServletRequest req,HttpServletResponse res) throws IOException, ServletException {
		try {
		int i= Integer.parseInt( req.getParameter("num1"));
		int j= Integer.parseInt( req.getParameter("num2"));
		
		PrintWriter Out=res.getWriter();
			Out.println("The Result of Addition is "+(i+j));
			int k=i+j;
			req.setAttribute("k",k);
		}catch(Exception e) {
			PrintWriter Out=res.getWriter();
			Out.println("Invalid Input Please Enter a Numeric Value");
		}
		
		RequestDispatcher rd= req.getRequestDispatcher("sq");
		rd.forward(req, res);
	}
}
