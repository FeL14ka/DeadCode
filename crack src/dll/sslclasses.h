﻿#pragma once

/*
package me.mrnv;

import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLSession;

public class CustomHostnameVerifier implements HostnameVerifier
{
	@Override
	public boolean verify( String hostname, SSLSession session )
	{
		return true;
	}
}
*/
unsigned char CustomHostnameVerifier[ 553 ] =
{
	0xCA, 0xFE, 0xBA, 0xBE, 0x00, 0x00, 0x00, 0x34, 0x00, 0x18, 0x01, 0x00,
	0x1E, 0x6D, 0x65, 0x2F, 0x6D, 0x72, 0x6E, 0x76, 0x2F, 0x43, 0x75, 0x73,
	0x74, 0x6F, 0x6D, 0x48, 0x6F, 0x73, 0x74, 0x6E, 0x61, 0x6D, 0x65, 0x56,
	0x65, 0x72, 0x69, 0x66, 0x69, 0x65, 0x72, 0x07, 0x00, 0x01, 0x01, 0x00,
	0x10, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x6C, 0x61, 0x6E, 0x67, 0x2F, 0x4F,
	0x62, 0x6A, 0x65, 0x63, 0x74, 0x07, 0x00, 0x03, 0x01, 0x00, 0x1E, 0x6A,
	0x61, 0x76, 0x61, 0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C,
	0x2F, 0x48, 0x6F, 0x73, 0x74, 0x6E, 0x61, 0x6D, 0x65, 0x56, 0x65, 0x72,
	0x69, 0x66, 0x69, 0x65, 0x72, 0x07, 0x00, 0x05, 0x01, 0x00, 0x1B, 0x43,
	0x75, 0x73, 0x74, 0x6F, 0x6D, 0x48, 0x6F, 0x73, 0x74, 0x6E, 0x61, 0x6D,
	0x65, 0x56, 0x65, 0x72, 0x69, 0x66, 0x69, 0x65, 0x72, 0x2E, 0x6A, 0x61,
	0x76, 0x61, 0x01, 0x00, 0x06, 0x3C, 0x69, 0x6E, 0x69, 0x74, 0x3E, 0x01,
	0x00, 0x03, 0x28, 0x29, 0x56, 0x0C, 0x00, 0x08, 0x00, 0x09, 0x0A, 0x00,
	0x04, 0x00, 0x0A, 0x01, 0x00, 0x04, 0x74, 0x68, 0x69, 0x73, 0x01, 0x00,
	0x20, 0x4C, 0x6D, 0x65, 0x2F, 0x6D, 0x72, 0x6E, 0x76, 0x2F, 0x43, 0x75,
	0x73, 0x74, 0x6F, 0x6D, 0x48, 0x6F, 0x73, 0x74, 0x6E, 0x61, 0x6D, 0x65,
	0x56, 0x65, 0x72, 0x69, 0x66, 0x69, 0x65, 0x72, 0x3B, 0x01, 0x00, 0x06,
	0x76, 0x65, 0x72, 0x69, 0x66, 0x79, 0x01, 0x00, 0x2F, 0x28, 0x4C, 0x6A,
	0x61, 0x76, 0x61, 0x2F, 0x6C, 0x61, 0x6E, 0x67, 0x2F, 0x53, 0x74, 0x72,
	0x69, 0x6E, 0x67, 0x3B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x78, 0x2F, 0x6E,
	0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x53, 0x53, 0x4C, 0x53, 0x65,
	0x73, 0x73, 0x69, 0x6F, 0x6E, 0x3B, 0x29, 0x5A, 0x01, 0x00, 0x08, 0x68,
	0x6F, 0x73, 0x74, 0x6E, 0x61, 0x6D, 0x65, 0x01, 0x00, 0x12, 0x4C, 0x6A,
	0x61, 0x76, 0x61, 0x2F, 0x6C, 0x61, 0x6E, 0x67, 0x2F, 0x53, 0x74, 0x72,
	0x69, 0x6E, 0x67, 0x3B, 0x01, 0x00, 0x07, 0x73, 0x65, 0x73, 0x73, 0x69,
	0x6F, 0x6E, 0x01, 0x00, 0x1A, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x78, 0x2F,
	0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x53, 0x53, 0x4C, 0x53,
	0x65, 0x73, 0x73, 0x69, 0x6F, 0x6E, 0x3B, 0x01, 0x00, 0x04, 0x43, 0x6F,
	0x64, 0x65, 0x01, 0x00, 0x12, 0x4C, 0x6F, 0x63, 0x61, 0x6C, 0x56, 0x61,
	0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x54, 0x61, 0x62, 0x6C, 0x65, 0x01,
	0x00, 0x0F, 0x4C, 0x69, 0x6E, 0x65, 0x4E, 0x75, 0x6D, 0x62, 0x65, 0x72,
	0x54, 0x61, 0x62, 0x6C, 0x65, 0x01, 0x00, 0x0A, 0x53, 0x6F, 0x75, 0x72,
	0x63, 0x65, 0x46, 0x69, 0x6C, 0x65, 0x00, 0x21, 0x00, 0x02, 0x00, 0x04,
	0x00, 0x01, 0x00, 0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x08,
	0x00, 0x09, 0x00, 0x01, 0x00, 0x14, 0x00, 0x00, 0x00, 0x2F, 0x00, 0x01,
	0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x2A, 0xB7, 0x00, 0x0B, 0xB1, 0x00,
	0x00, 0x00, 0x02, 0x00, 0x15, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x0C, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x16, 0x00,
	0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00,
	0x0E, 0x00, 0x0F, 0x00, 0x01, 0x00, 0x14, 0x00, 0x00, 0x00, 0x40, 0x00,
	0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x04, 0xAC, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x15, 0x00, 0x00, 0x00, 0x20, 0x00, 0x03, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x0C, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x10, 0x00, 0x11, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x12, 0x00,
	0x13, 0x00, 0x02, 0x00, 0x16, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x0B, 0x00, 0x01, 0x00, 0x17, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x07
};

/*
package me.mrnv;

import javax.net.ssl.SSLEngine;
import javax.net.ssl.X509ExtendedTrustManager;
import java.net.Socket;
import java.security.cert.CertificateException;
import java.security.cert.X509Certificate;

public class EmptyTrustManager extends X509ExtendedTrustManager
{
	@Override
	public void checkClientTrusted( X509Certificate[ ] x509Certificates, String s, Socket socket ) throws CertificateException
	{

	}

	@Override
	public void checkServerTrusted( X509Certificate[ ] x509Certificates, String s, Socket socket ) throws CertificateException
	{

	}

	@Override
	public void checkClientTrusted( X509Certificate[ ] x509Certificates, String s, SSLEngine sslEngine ) throws CertificateException
	{

	}

	@Override
	public void checkServerTrusted( X509Certificate[ ] x509Certificates, String s, SSLEngine sslEngine ) throws CertificateException
	{

	}

	@Override
	public void checkClientTrusted( X509Certificate[ ] x509Certificates, String s ) throws CertificateException
	{

	}

	@Override
	public void checkServerTrusted( X509Certificate[ ] x509Certificates, String s ) throws CertificateException
	{

	}

	@Override
	public X509Certificate[ ] getAcceptedIssuers( )
	{
		return null;
	}
}
*/
unsigned char EmptyTrustManager[ 1475 ] =
{
	0xCA, 0xFE, 0xBA, 0xBE, 0x00, 0x00, 0x00, 0x34, 0x00, 0x22, 0x01, 0x00,
	0x19, 0x6D, 0x65, 0x2F, 0x6D, 0x72, 0x6E, 0x76, 0x2F, 0x45, 0x6D, 0x70,
	0x74, 0x79, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4D, 0x61, 0x6E, 0x61, 0x67,
	0x65, 0x72, 0x07, 0x00, 0x01, 0x01, 0x00, 0x26, 0x6A, 0x61, 0x76, 0x61,
	0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x58, 0x35,
	0x30, 0x39, 0x45, 0x78, 0x74, 0x65, 0x6E, 0x64, 0x65, 0x64, 0x54, 0x72,
	0x75, 0x73, 0x74, 0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72, 0x07, 0x00,
	0x03, 0x01, 0x00, 0x16, 0x45, 0x6D, 0x70, 0x74, 0x79, 0x54, 0x72, 0x75,
	0x73, 0x74, 0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72, 0x2E, 0x6A, 0x61,
	0x76, 0x61, 0x01, 0x00, 0x06, 0x3C, 0x69, 0x6E, 0x69, 0x74, 0x3E, 0x01,
	0x00, 0x03, 0x28, 0x29, 0x56, 0x0C, 0x00, 0x06, 0x00, 0x07, 0x0A, 0x00,
	0x04, 0x00, 0x08, 0x01, 0x00, 0x04, 0x74, 0x68, 0x69, 0x73, 0x01, 0x00,
	0x1B, 0x4C, 0x6D, 0x65, 0x2F, 0x6D, 0x72, 0x6E, 0x76, 0x2F, 0x45, 0x6D,
	0x70, 0x74, 0x79, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4D, 0x61, 0x6E, 0x61,
	0x67, 0x65, 0x72, 0x3B, 0x01, 0x00, 0x12, 0x63, 0x68, 0x65, 0x63, 0x6B,
	0x43, 0x6C, 0x69, 0x65, 0x6E, 0x74, 0x54, 0x72, 0x75, 0x73, 0x74, 0x65,
	0x64, 0x01, 0x00, 0x4B, 0x28, 0x5B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F,
	0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x2F, 0x63, 0x65, 0x72,
	0x74, 0x2F, 0x58, 0x35, 0x30, 0x39, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66,
	0x69, 0x63, 0x61, 0x74, 0x65, 0x3B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F,
	0x6C, 0x61, 0x6E, 0x67, 0x2F, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x3B,
	0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x53, 0x6F,
	0x63, 0x6B, 0x65, 0x74, 0x3B, 0x29, 0x56, 0x01, 0x00, 0x27, 0x6A, 0x61,
	0x76, 0x61, 0x2F, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x2F,
	0x63, 0x65, 0x72, 0x74, 0x2F, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69,
	0x63, 0x61, 0x74, 0x65, 0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x69, 0x6F,
	0x6E, 0x07, 0x00, 0x0E, 0x01, 0x00, 0x10, 0x78, 0x35, 0x30, 0x39, 0x43,
	0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x73, 0x01,
	0x00, 0x25, 0x5B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x73, 0x65, 0x63,
	0x75, 0x72, 0x69, 0x74, 0x79, 0x2F, 0x63, 0x65, 0x72, 0x74, 0x2F, 0x58,
	0x35, 0x30, 0x39, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61,
	0x74, 0x65, 0x3B, 0x01, 0x00, 0x01, 0x73, 0x01, 0x00, 0x12, 0x4C, 0x6A,
	0x61, 0x76, 0x61, 0x2F, 0x6C, 0x61, 0x6E, 0x67, 0x2F, 0x53, 0x74, 0x72,
	0x69, 0x6E, 0x67, 0x3B, 0x01, 0x00, 0x06, 0x73, 0x6F, 0x63, 0x6B, 0x65,
	0x74, 0x01, 0x00, 0x11, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x6E, 0x65,
	0x74, 0x2F, 0x53, 0x6F, 0x63, 0x6B, 0x65, 0x74, 0x3B, 0x01, 0x00, 0x12,
	0x63, 0x68, 0x65, 0x63, 0x6B, 0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x54,
	0x72, 0x75, 0x73, 0x74, 0x65, 0x64, 0x01, 0x00, 0x53, 0x28, 0x5B, 0x4C,
	0x6A, 0x61, 0x76, 0x61, 0x2F, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74,
	0x79, 0x2F, 0x63, 0x65, 0x72, 0x74, 0x2F, 0x58, 0x35, 0x30, 0x39, 0x43,
	0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x3B, 0x4C,
	0x6A, 0x61, 0x76, 0x61, 0x2F, 0x6C, 0x61, 0x6E, 0x67, 0x2F, 0x53, 0x74,
	0x72, 0x69, 0x6E, 0x67, 0x3B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x78, 0x2F,
	0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x53, 0x53, 0x4C, 0x45,
	0x6E, 0x67, 0x69, 0x6E, 0x65, 0x3B, 0x29, 0x56, 0x01, 0x00, 0x09, 0x73,
	0x73, 0x6C, 0x45, 0x6E, 0x67, 0x69, 0x6E, 0x65, 0x01, 0x00, 0x19, 0x4C,
	0x6A, 0x61, 0x76, 0x61, 0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73,
	0x6C, 0x2F, 0x53, 0x53, 0x4C, 0x45, 0x6E, 0x67, 0x69, 0x6E, 0x65, 0x3B,
	0x01, 0x00, 0x3A, 0x28, 0x5B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x73,
	0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x2F, 0x63, 0x65, 0x72, 0x74,
	0x2F, 0x58, 0x35, 0x30, 0x39, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69,
	0x63, 0x61, 0x74, 0x65, 0x3B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x6C,
	0x61, 0x6E, 0x67, 0x2F, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x3B, 0x29,
	0x56, 0x01, 0x00, 0x12, 0x67, 0x65, 0x74, 0x41, 0x63, 0x63, 0x65, 0x70,
	0x74, 0x65, 0x64, 0x49, 0x73, 0x73, 0x75, 0x65, 0x72, 0x73, 0x01, 0x00,
	0x27, 0x28, 0x29, 0x5B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x73, 0x65,
	0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x2F, 0x63, 0x65, 0x72, 0x74, 0x2F,
	0x58, 0x35, 0x30, 0x39, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63,
	0x61, 0x74, 0x65, 0x3B, 0x01, 0x00, 0x04, 0x43, 0x6F, 0x64, 0x65, 0x01,
	0x00, 0x12, 0x4C, 0x6F, 0x63, 0x61, 0x6C, 0x56, 0x61, 0x72, 0x69, 0x61,
	0x62, 0x6C, 0x65, 0x54, 0x61, 0x62, 0x6C, 0x65, 0x01, 0x00, 0x0F, 0x4C,
	0x69, 0x6E, 0x65, 0x4E, 0x75, 0x6D, 0x62, 0x65, 0x72, 0x54, 0x61, 0x62,
	0x6C, 0x65, 0x01, 0x00, 0x0A, 0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x69,
	0x6F, 0x6E, 0x73, 0x01, 0x00, 0x0A, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65,
	0x46, 0x69, 0x6C, 0x65, 0x00, 0x21, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x06, 0x00, 0x07, 0x00, 0x01,
	0x00, 0x1D, 0x00, 0x00, 0x00, 0x2F, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x05, 0x2A, 0xB7, 0x00, 0x09, 0xB1, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x1E, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00,
	0x0A, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x01, 0x00, 0x0C, 0x00, 0x0D, 0x00,
	0x02, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x04, 0x00,
	0x00, 0x00, 0x01, 0xB1, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1E, 0x00, 0x00,
	0x00, 0x2A, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0A, 0x00, 0x0B,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00, 0x11, 0x00, 0x01,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x12, 0x00, 0x13, 0x00, 0x02, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x14, 0x00, 0x15, 0x00, 0x03, 0x00, 0x1F, 0x00, 0x00,
	0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x20, 0x00, 0x00,
	0x00, 0x04, 0x00, 0x01, 0x00, 0x0F, 0x00, 0x01, 0x00, 0x16, 0x00, 0x0D,
	0x00, 0x02, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x01, 0xB1, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1E, 0x00,
	0x00, 0x00, 0x2A, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0A, 0x00,
	0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00, 0x11, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x12, 0x00, 0x13, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x14, 0x00, 0x15, 0x00, 0x03, 0x00, 0x1F, 0x00,
	0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x15, 0x00, 0x20, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x0F, 0x00, 0x01, 0x00, 0x0C, 0x00,
	0x17, 0x00, 0x02, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00,
	0x04, 0x00, 0x00, 0x00, 0x01, 0xB1, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1E,
	0x00, 0x00, 0x00, 0x2A, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0A,
	0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00, 0x11,
	0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x12, 0x00, 0x13, 0x00, 0x02,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x19, 0x00, 0x03, 0x00, 0x1F,
	0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x20,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x0F, 0x00, 0x01, 0x00, 0x16,
	0x00, 0x17, 0x00, 0x02, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00,
	0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0xB1, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x1E, 0x00, 0x00, 0x00, 0x2A, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00,
	0x0A, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00,
	0x11, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x12, 0x00, 0x13, 0x00,
	0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x19, 0x00, 0x03, 0x00,
	0x1F, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x21, 0x00,
	0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x0F, 0x00, 0x01, 0x00,
	0x0C, 0x00, 0x1A, 0x00, 0x02, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x3F, 0x00,
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0xB1, 0x00, 0x00, 0x00, 0x02,
	0x00, 0x1E, 0x00, 0x00, 0x00, 0x20, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01,
	0x00, 0x0A, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10,
	0x00, 0x11, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x12, 0x00, 0x13,
	0x00, 0x02, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x27, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x0F,
	0x00, 0x01, 0x00, 0x16, 0x00, 0x1A, 0x00, 0x02, 0x00, 0x1D, 0x00, 0x00,
	0x00, 0x3F, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0xB1, 0x00,
	0x00, 0x00, 0x02, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x20, 0x00, 0x03, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x0A, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x10, 0x00, 0x11, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
	0x12, 0x00, 0x13, 0x00, 0x02, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00,
	0x01, 0x00, 0x0F, 0x00, 0x01, 0x00, 0x1B, 0x00, 0x1C, 0x00, 0x01, 0x00,
	0x1D, 0x00, 0x00, 0x00, 0x2C, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x02, 0x01, 0xB0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1E, 0x00, 0x00, 0x00,
	0x0C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0A, 0x00, 0x0B, 0x00,
	0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x32, 0x00, 0x01, 0x00, 0x21, 0x00, 0x00, 0x00, 0x02, 0x00, 0x05
};
/*
package me.mrnv;

import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.TrustManager;
import java.security.SecureRandom;

public class DisableSSLCheck
{
	public static boolean disable( )
	{
		// https://stackoverflow.com/a/47050878
		try
		{
			TrustManager[ ] mgr = new TrustManager[ ]{ new EmptyTrustManager( ) };

			SSLContext ctx = SSLContext.getInstance( "SSL" );
			ctx.init( null, mgr, new SecureRandom( ) );
			HttpsURLConnection.setDefaultSSLSocketFactory( ctx.getSocketFactory( ) );
			HttpsURLConnection.setDefaultHostnameVerifier( new CustomHostnameVerifier( ) );

			return true;
		}
		catch( Exception e )
		{
			e.printStackTrace( );
		}

		return false;
	}
}
*/
unsigned char DisableSSLCheck[ 1283 ] =
{
	0xCA, 0xFE, 0xBA, 0xBE, 0x00, 0x00, 0x00, 0x34, 0x00, 0x43, 0x01, 0x00,
	0x17, 0x6D, 0x65, 0x2F, 0x6D, 0x72, 0x6E, 0x76, 0x2F, 0x44, 0x69, 0x73,
	0x61, 0x62, 0x6C, 0x65, 0x53, 0x53, 0x4C, 0x43, 0x68, 0x65, 0x63, 0x6B,
	0x07, 0x00, 0x01, 0x01, 0x00, 0x10, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x6C,
	0x61, 0x6E, 0x67, 0x2F, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x07, 0x00,
	0x03, 0x01, 0x00, 0x14, 0x44, 0x69, 0x73, 0x61, 0x62, 0x6C, 0x65, 0x53,
	0x53, 0x4C, 0x43, 0x68, 0x65, 0x63, 0x6B, 0x2E, 0x6A, 0x61, 0x76, 0x61,
	0x01, 0x00, 0x06, 0x3C, 0x69, 0x6E, 0x69, 0x74, 0x3E, 0x01, 0x00, 0x03,
	0x28, 0x29, 0x56, 0x0C, 0x00, 0x06, 0x00, 0x07, 0x0A, 0x00, 0x04, 0x00,
	0x08, 0x01, 0x00, 0x04, 0x74, 0x68, 0x69, 0x73, 0x01, 0x00, 0x19, 0x4C,
	0x6D, 0x65, 0x2F, 0x6D, 0x72, 0x6E, 0x76, 0x2F, 0x44, 0x69, 0x73, 0x61,
	0x62, 0x6C, 0x65, 0x53, 0x53, 0x4C, 0x43, 0x68, 0x65, 0x63, 0x6B, 0x3B,
	0x01, 0x00, 0x07, 0x64, 0x69, 0x73, 0x61, 0x62, 0x6C, 0x65, 0x01, 0x00,
	0x03, 0x28, 0x29, 0x5A, 0x01, 0x00, 0x13, 0x6A, 0x61, 0x76, 0x61, 0x2F,
	0x6C, 0x61, 0x6E, 0x67, 0x2F, 0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x69,
	0x6F, 0x6E, 0x07, 0x00, 0x0E, 0x01, 0x00, 0x1A, 0x6A, 0x61, 0x76, 0x61,
	0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x54, 0x72,
	0x75, 0x73, 0x74, 0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72, 0x07, 0x00,
	0x10, 0x01, 0x00, 0x19, 0x6D, 0x65, 0x2F, 0x6D, 0x72, 0x6E, 0x76, 0x2F,
	0x45, 0x6D, 0x70, 0x74, 0x79, 0x54, 0x72, 0x75, 0x73, 0x74, 0x4D, 0x61,
	0x6E, 0x61, 0x67, 0x65, 0x72, 0x07, 0x00, 0x12, 0x0A, 0x00, 0x13, 0x00,
	0x08, 0x01, 0x00, 0x03, 0x53, 0x53, 0x4C, 0x08, 0x00, 0x15, 0x01, 0x00,
	0x18, 0x6A, 0x61, 0x76, 0x61, 0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73,
	0x73, 0x6C, 0x2F, 0x53, 0x53, 0x4C, 0x43, 0x6F, 0x6E, 0x74, 0x65, 0x78,
	0x74, 0x07, 0x00, 0x17, 0x01, 0x00, 0x0B, 0x67, 0x65, 0x74, 0x49, 0x6E,
	0x73, 0x74, 0x61, 0x6E, 0x63, 0x65, 0x01, 0x00, 0x2E, 0x28, 0x4C, 0x6A,
	0x61, 0x76, 0x61, 0x2F, 0x6C, 0x61, 0x6E, 0x67, 0x2F, 0x53, 0x74, 0x72,
	0x69, 0x6E, 0x67, 0x3B, 0x29, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x78, 0x2F,
	0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x53, 0x53, 0x4C, 0x43,
	0x6F, 0x6E, 0x74, 0x65, 0x78, 0x74, 0x3B, 0x0C, 0x00, 0x19, 0x00, 0x1A,
	0x0A, 0x00, 0x18, 0x00, 0x1B, 0x01, 0x00, 0x1A, 0x6A, 0x61, 0x76, 0x61,
	0x2F, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x2F, 0x53, 0x65,
	0x63, 0x75, 0x72, 0x65, 0x52, 0x61, 0x6E, 0x64, 0x6F, 0x6D, 0x07, 0x00,
	0x1D, 0x0A, 0x00, 0x1E, 0x00, 0x08, 0x01, 0x00, 0x04, 0x69, 0x6E, 0x69,
	0x74, 0x01, 0x00, 0x57, 0x28, 0x5B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x78,
	0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x4B, 0x65, 0x79,
	0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72, 0x3B, 0x5B, 0x4C, 0x6A, 0x61,
	0x76, 0x61, 0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F,
	0x54, 0x72, 0x75, 0x73, 0x74, 0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72,
	0x3B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x73, 0x65, 0x63, 0x75, 0x72,
	0x69, 0x74, 0x79, 0x2F, 0x53, 0x65, 0x63, 0x75, 0x72, 0x65, 0x52, 0x61,
	0x6E, 0x64, 0x6F, 0x6D, 0x3B, 0x29, 0x56, 0x0C, 0x00, 0x20, 0x00, 0x21,
	0x0A, 0x00, 0x18, 0x00, 0x22, 0x01, 0x00, 0x10, 0x67, 0x65, 0x74, 0x53,
	0x6F, 0x63, 0x6B, 0x65, 0x74, 0x46, 0x61, 0x63, 0x74, 0x6F, 0x72, 0x79,
	0x01, 0x00, 0x22, 0x28, 0x29, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x78, 0x2F,
	0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x53, 0x53, 0x4C, 0x53,
	0x6F, 0x63, 0x6B, 0x65, 0x74, 0x46, 0x61, 0x63, 0x74, 0x6F, 0x72, 0x79,
	0x3B, 0x0C, 0x00, 0x24, 0x00, 0x25, 0x0A, 0x00, 0x18, 0x00, 0x26, 0x01,
	0x00, 0x20, 0x6A, 0x61, 0x76, 0x61, 0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F,
	0x73, 0x73, 0x6C, 0x2F, 0x48, 0x74, 0x74, 0x70, 0x73, 0x55, 0x52, 0x4C,
	0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x07, 0x00,
	0x28, 0x01, 0x00, 0x1A, 0x73, 0x65, 0x74, 0x44, 0x65, 0x66, 0x61, 0x75,
	0x6C, 0x74, 0x53, 0x53, 0x4C, 0x53, 0x6F, 0x63, 0x6B, 0x65, 0x74, 0x46,
	0x61, 0x63, 0x74, 0x6F, 0x72, 0x79, 0x01, 0x00, 0x23, 0x28, 0x4C, 0x6A,
	0x61, 0x76, 0x61, 0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C,
	0x2F, 0x53, 0x53, 0x4C, 0x53, 0x6F, 0x63, 0x6B, 0x65, 0x74, 0x46, 0x61,
	0x63, 0x74, 0x6F, 0x72, 0x79, 0x3B, 0x29, 0x56, 0x0C, 0x00, 0x2A, 0x00,
	0x2B, 0x0A, 0x00, 0x29, 0x00, 0x2C, 0x01, 0x00, 0x1E, 0x6D, 0x65, 0x2F,
	0x6D, 0x72, 0x6E, 0x76, 0x2F, 0x43, 0x75, 0x73, 0x74, 0x6F, 0x6D, 0x48,
	0x6F, 0x73, 0x74, 0x6E, 0x61, 0x6D, 0x65, 0x56, 0x65, 0x72, 0x69, 0x66,
	0x69, 0x65, 0x72, 0x07, 0x00, 0x2E, 0x0A, 0x00, 0x2F, 0x00, 0x08, 0x01,
	0x00, 0x1A, 0x73, 0x65, 0x74, 0x44, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74,
	0x48, 0x6F, 0x73, 0x74, 0x6E, 0x61, 0x6D, 0x65, 0x56, 0x65, 0x72, 0x69,
	0x66, 0x69, 0x65, 0x72, 0x01, 0x00, 0x23, 0x28, 0x4C, 0x6A, 0x61, 0x76,
	0x61, 0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x48,
	0x6F, 0x73, 0x74, 0x6E, 0x61, 0x6D, 0x65, 0x56, 0x65, 0x72, 0x69, 0x66,
	0x69, 0x65, 0x72, 0x3B, 0x29, 0x56, 0x0C, 0x00, 0x31, 0x00, 0x32, 0x0A,
	0x00, 0x29, 0x00, 0x33, 0x01, 0x00, 0x0F, 0x70, 0x72, 0x69, 0x6E, 0x74,
	0x53, 0x74, 0x61, 0x63, 0x6B, 0x54, 0x72, 0x61, 0x63, 0x65, 0x0C, 0x00,
	0x35, 0x00, 0x07, 0x0A, 0x00, 0x0F, 0x00, 0x36, 0x01, 0x00, 0x03, 0x6D,
	0x67, 0x72, 0x01, 0x00, 0x1D, 0x5B, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x78,
	0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x54, 0x72, 0x75,
	0x73, 0x74, 0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72, 0x3B, 0x01, 0x00,
	0x03, 0x63, 0x74, 0x78, 0x01, 0x00, 0x1A, 0x4C, 0x6A, 0x61, 0x76, 0x61,
	0x78, 0x2F, 0x6E, 0x65, 0x74, 0x2F, 0x73, 0x73, 0x6C, 0x2F, 0x53, 0x53,
	0x4C, 0x43, 0x6F, 0x6E, 0x74, 0x65, 0x78, 0x74, 0x3B, 0x01, 0x00, 0x01,
	0x65, 0x01, 0x00, 0x15, 0x4C, 0x6A, 0x61, 0x76, 0x61, 0x2F, 0x6C, 0x61,
	0x6E, 0x67, 0x2F, 0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x69, 0x6F, 0x6E,
	0x3B, 0x01, 0x00, 0x04, 0x43, 0x6F, 0x64, 0x65, 0x01, 0x00, 0x12, 0x4C,
	0x6F, 0x63, 0x61, 0x6C, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65,
	0x54, 0x61, 0x62, 0x6C, 0x65, 0x01, 0x00, 0x0F, 0x4C, 0x69, 0x6E, 0x65,
	0x4E, 0x75, 0x6D, 0x62, 0x65, 0x72, 0x54, 0x61, 0x62, 0x6C, 0x65, 0x01,
	0x00, 0x0D, 0x53, 0x74, 0x61, 0x63, 0x6B, 0x4D, 0x61, 0x70, 0x54, 0x61,
	0x62, 0x6C, 0x65, 0x01, 0x00, 0x0A, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65,
	0x46, 0x69, 0x6C, 0x65, 0x00, 0x21, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x06, 0x00, 0x07, 0x00, 0x01,
	0x00, 0x3E, 0x00, 0x00, 0x00, 0x2F, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x05, 0x2A, 0xB7, 0x00, 0x09, 0xB1, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x3F, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00,
	0x0A, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x09, 0x00, 0x0C, 0x00, 0x0D, 0x00,
	0x01, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xAE, 0x00, 0x05, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x3C, 0x04, 0xBD, 0x00, 0x11, 0x59, 0x03, 0xBB, 0x00, 0x13,
	0x59, 0xB7, 0x00, 0x14, 0x53, 0x4B, 0x12, 0x16, 0xB8, 0x00, 0x1C, 0x4C,
	0x2B, 0x01, 0x2A, 0xBB, 0x00, 0x1E, 0x59, 0xB7, 0x00, 0x1F, 0xB6, 0x00,
	0x23, 0x2B, 0xB6, 0x00, 0x27, 0xB8, 0x00, 0x2D, 0xBB, 0x00, 0x2F, 0x59,
	0xB7, 0x00, 0x30, 0xB8, 0x00, 0x34, 0x04, 0xAC, 0x4B, 0x2A, 0xB6, 0x00,
	0x37, 0x03, 0xAC, 0x00, 0x01, 0x00, 0x00, 0x00, 0x34, 0x00, 0x35, 0x00,
	0x0F, 0x00, 0x03, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x00, 0x03, 0x00,
	0x0F, 0x00, 0x26, 0x00, 0x38, 0x00, 0x39, 0x00, 0x00, 0x00, 0x15, 0x00,
	0x20, 0x00, 0x3A, 0x00, 0x3B, 0x00, 0x01, 0x00, 0x36, 0x00, 0x04, 0x00,
	0x3C, 0x00, 0x3D, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x26, 0x00,
	0x09, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x11, 0x00, 0x15, 0x00,
	0x12, 0x00, 0x22, 0x00, 0x13, 0x00, 0x29, 0x00, 0x14, 0x00, 0x33, 0x00,
	0x16, 0x00, 0x35, 0x00, 0x18, 0x00, 0x36, 0x00, 0x1A, 0x00, 0x3A, 0x00,
	0x1D, 0x00, 0x41, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x75, 0x07, 0x00,
	0x0F, 0x00, 0x01, 0x00, 0x42, 0x00, 0x00, 0x00, 0x02, 0x00, 0x05
};
