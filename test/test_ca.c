/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2020-01-12 10:51:11
 * @LastEditTime : 2020-01-14 02:59:48
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
static const char *test_ca_crt = {
    // "-----BEGIN CERTIFICATE-----\r\n"
    // "MIIGhzCCBW+gAwIBAgIQCwOKNDtbF66SPuil0B6qvzANBgkqhkiG9w0BAQsFADBe\r\n"
    // "MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\r\n"
    // "d3cuZGlnaWNlcnQuY29tMR0wGwYDVQQDExRHZW9UcnVzdCBSU0EgQ0EgMjAxODAe\r\n"
    // "Fw0xODExMDcwMDAwMDBaFw0yMDExMDYxMjAwMDBaMHgxCzAJBgNVBAYTAkNOMRIw\r\n"
    // "EAYDVQQHDAnljJfkuqzluIIxMzAxBgNVBAoMKuWMl+S6rOWIm+aWsOS5kOefpeS/\r\n"
    // "oeaBr+aKgOacr+aciemZkOWFrOWPuDELMAkGA1UECxMCSVQxEzARBgNVBAMMCiou\r\n"
    // "Y3Nkbi5uZXQwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCUKjtQGuUl\r\n"
    // "rGJ9ZdgjSbwVqgkl3IBE7NCaSCjfoeOzsluekH+TDrvb+cmObMe2Ww+AhC2aXnA9\r\n"
    // "TANn+lOo7XtfpLZLWGtcR7ngE7GOzxQDt8rMg5AAUJ3/mBPmFkcADAnwQLwJDFqj\r\n"
    // "s2SvBayNt7Tr9mfH60L1DeQ+9Hqxn5RgN7AxJAzhUNaB2vqzXMThsAtbBI5i1EtT\r\n"
    // "DDBpGdZHSHt3NqJh+D1Ll3OaCYmu1FjV7yqidlFRuBeld0yHqccdsORwsC+/bQJQ\r\n"
    // "b1kVGwiYGS5ugUpkpync2xvwiyz+2v3F7ALYp7Gn7knj/4zPpmGzCtvPVKRteCpe\r\n"
    // "Ov7tMoYlPZidAgMBAAGjggMlMIIDITAfBgNVHSMEGDAWgBSQWP+wnHWoUVR3se3y\r\n"
    // "o0MWOJ5sxTAdBgNVHQ4EFgQUHFMY0DhWIgzmqNFGyEUvCianlJowHwYDVR0RBBgw\r\n"
    // "FoIKKi5jc2RuLm5ldIIIY3Nkbi5uZXQwDgYDVR0PAQH/BAQDAgWgMB0GA1UdJQQW\r\n"
    // "MBQGCCsGAQUFBwMBBggrBgEFBQcDAjA+BgNVHR8ENzA1MDOgMaAvhi1odHRwOi8v\r\n"
    // "Y2RwLmdlb3RydXN0LmNvbS9HZW9UcnVzdFJTQUNBMjAxOC5jcmwwTAYDVR0gBEUw\r\n"
    // "QzA3BglghkgBhv1sAQEwKjAoBggrBgEFBQcCARYcaHR0cHM6Ly93d3cuZGlnaWNl\r\n"
    // "cnQuY29tL0NQUzAIBgZngQwBAgIwdQYIKwYBBQUHAQEEaTBnMCYGCCsGAQUFBzAB\r\n"
    // "hhpodHRwOi8vc3RhdHVzLmdlb3RydXN0LmNvbTA9BggrBgEFBQcwAoYxaHR0cDov\r\n"
    // "L2NhY2VydHMuZ2VvdHJ1c3QuY29tL0dlb1RydXN0UlNBQ0EyMDE4LmNydDAJBgNV\r\n"
    // "HRMEAjAAMIIBfQYKKwYBBAHWeQIEAgSCAW0EggFpAWcAdgC72d+8H4pxtZOUI5eq\r\n"
    // "kntHOFeVCqtS6BqQlmQ2jh7RhQAAAWbsBztsAAAEAwBHMEUCIAbpG92WUun0uiBF\r\n"
    // "+7CqYEjlxWqI4KkaM5vR9piaKDWUAiEAs56JwV+5VQm/tU9rq2lRAX+tSkCVDDfk\r\n"
    // "xDL+kRcPTEoAdQCHdb/nWXz4jEOZX73zbv9WjUdWNv9KtWDBtOr/XqCDDwAAAWbs\r\n"
    // "BztFAAAEAwBGMEQCIGTX2SdhofBpRdUKOwWZ1t+HH/Gk46Mp0xVIH0+NYPmqAiAW\r\n"
    // "+Ml9eIiwGiyzOb75O0cfB0vX6lg68odubsfBUxXQ6gB2AG9Tdqwx8DEZ2JkApFEV\r\n"
    // "/3cVHBHZAsEAKQaNsgiaN9kTAAABZuwHO8oAAAQDAEcwRQIgRxLNb0uCaKEU7UzQ\r\n"
    // "xCaCV9R4qLyEiItYWujrl3bQNA0CIQCTb9yKUWHtimhyuq29GekGFwgvAgWx82SG\r\n"
    // "+6i3WRK5/zANBgkqhkiG9w0BAQsFAAOCAQEATMknSOk0mh2lV/l1Mp9dnLMYs09y\r\n"
    // "8DsgpZM+8zss9e3NehKYPviaF4ZHwMjbpI92/NpaeA9vk0A2iKtvfYa5C5oysI93\r\n"
    // "roDOrscBkus1bbTFWU8TtyCzDcrniRyUscoUe7lJNdEl3YS6x01ioELccVrJ0435\r\n"
    // "FhWsL8qbg92lNnX5r5W2vj+LtgEeNqxTmoO/QEJ2Yh7VEswhyFKFKC8jF5IXSrXe\r\n"
    // "rwT8WXNrg+CLWCQeVYpwii1hMJDnTrp/MGIH7fQhf5yGIDa/Vh2TbiJtsJCipBgG\r\n"
    // "03sqmRkd869zRRmSvkq/D7HLKL/lm1IUNH9PSs3nYjPNmdF5JI6F4bTz6Q==\r\n"
    // "-----END CERTIFICATE-----"
    "-----BEGIN CERTIFICATE-----\r\n"
    "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\r\n"
    "-----END CERTIFICATE-----\r\n"
    "-----BEGIN CERTIFICATE-----\r\n"
    "MIIErjCCA5agAwIBAgIQBYAmfwbylVM0jhwYWl7uLjANBgkqhkiG9w0BAQsFADBh\r\n"
    "MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\r\n"
    "d3cuZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBD\r\n"
    "QTAeFw0xNzEyMDgxMjI4MjZaFw0yNzEyMDgxMjI4MjZaMHIxCzAJBgNVBAYTAkNO\r\n"
    "MSUwIwYDVQQKExxUcnVzdEFzaWEgVGVjaG5vbG9naWVzLCBJbmMuMR0wGwYDVQQL\r\n"
    "ExREb21haW4gVmFsaWRhdGVkIFNTTDEdMBsGA1UEAxMUVHJ1c3RBc2lhIFRMUyBS\r\n"
    "U0EgQ0EwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCgWa9X+ph+wAm8\r\n"
    "Yh1Fk1MjKbQ5QwBOOKVaZR/OfCh+F6f93u7vZHGcUU/lvVGgUQnbzJhR1UV2epJa\r\n"
    "e+m7cxnXIKdD0/VS9btAgwJszGFvwoqXeaCqFoP71wPmXjjUwLT70+qvX4hdyYfO\r\n"
    "JcjeTz5QKtg8zQwxaK9x4JT9CoOmoVdVhEBAiD3DwR5fFgOHDwwGxdJWVBvktnoA\r\n"
    "zjdTLXDdbSVC5jZ0u8oq9BiTDv7jAlsB5F8aZgvSZDOQeFrwaOTbKWSEInEhnchK\r\n"
    "ZTD1dz6aBlk1xGEI5PZWAnVAba/ofH33ktymaTDsE6xRDnW97pDkimCRak6CEbfe\r\n"
    "3dXw6OV5AgMBAAGjggFPMIIBSzAdBgNVHQ4EFgQUf9OZ86BHDjEAVlYijrfMnt3K\r\n"
    "AYowHwYDVR0jBBgwFoAUA95QNVbRTLtm8KPiGxvDl7I90VUwDgYDVR0PAQH/BAQD\r\n"
    "AgGGMB0GA1UdJQQWMBQGCCsGAQUFBwMBBggrBgEFBQcDAjASBgNVHRMBAf8ECDAG\r\n"
    "AQH/AgEAMDQGCCsGAQUFBwEBBCgwJjAkBggrBgEFBQcwAYYYaHR0cDovL29jc3Au\r\n"
    "ZGlnaWNlcnQuY29tMEIGA1UdHwQ7MDkwN6A1oDOGMWh0dHA6Ly9jcmwzLmRpZ2lj\r\n"
    "ZXJ0LmNvbS9EaWdpQ2VydEdsb2JhbFJvb3RDQS5jcmwwTAYDVR0gBEUwQzA3Bglg\r\n"
    "hkgBhv1sAQIwKjAoBggrBgEFBQcCARYcaHR0cHM6Ly93d3cuZGlnaWNlcnQuY29t\r\n"
    "L0NQUzAIBgZngQwBAgEwDQYJKoZIhvcNAQELBQADggEBAK3dVOj5dlv4MzK2i233\r\n"
    "lDYvyJ3slFY2X2HKTYGte8nbK6i5/fsDImMYihAkp6VaNY/en8WZ5qcrQPVLuJrJ\r\n"
    "DSXT04NnMeZOQDUoj/NHAmdfCBB/h1bZ5OGK6Sf1h5Yx/5wR4f3TUoPgGlnU7EuP\r\n"
    "ISLNdMRiDrXntcImDAiRvkh5GJuH4YCVE6XEntqaNIgGkRwxKSgnU3Id3iuFbW9F\r\n"
    "UQ9Qqtb1GX91AJ7i4153TikGgYCdwYkBURD8gSVe8OAco6IfZOYt/TEwii1Ivi1C\r\n"
    "qnuUlWpsF1LdQNIdfbW3TSe0BhQa7ifbVIfvPWHYOu3rkg1ZeMo6XRU9B4n5VyJY\r\n"
    "RmE=\r\n"
    "-----END CERTIFICATE-----"
};

const char *test_ca_get()
{
    return test_ca_crt;
}
