package com.mkRahul;

import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.*;
import javax.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;

public class sqServlet extends HttpServlet {
	public void doGet(HttpServletRequest req,HttpServletResponse res) throws IOException {
		int k=(int)req.getAttribute("k");
		k=k*k;
		PrintWriter out=res.getWriter();
		out.println("The Square of sum of both numbers is"+k);
	}
}
