#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/strand.hpp>
#include <boost/config.hpp>
#include <iostream>
#include <memory>
#include <string>
#include <thread>
#include <vector>

namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;
using tcp = net::ip::tcp;

void set_success_response(http::response<http::string_body>& res, const std::string& body)
{
    res.result(http::status::ok);
    res.set(http::field::server, "Boost.Beast");
    res.set(http::field::content_type, "text/plain");
    res.body() = body;
    res.prepare_payload();
}

void handle_request(http::request<http::string_body> req, http::response<http::string_body>& res)
{
    if (req.method() == http::verb::get && req.target() == "/Z9XhTkfmQhz0hEgQ8OaBgEaukfAd9G") {
        set_success_response(res, "e7Vmo16eTvpoKYTZ7j8cV2uezd2vkSbCInwSsnFtB26PDtAhGBkvH39Q51Ce6PWz");
    } else if (req.method() == http::verb::get && req.target() == "/WAeQDBj6ndFcQHYdkBodyjoqG4rR7R") {
        set_success_response(res, "KEtvAQixjwXzRFokI1CjfsWjGWFZfoVca7wgzWLjYbSdiMUWGnh6fNzxl6TNF4vr");
    } else if (req.method() == http::verb::get && req.target() == "/1dULCgiCP6s0ugDTiY26N1CBaG37I9") {
        set_success_response(res, "Mwb8YZzn5opl7MfEOkBJrz6Mlm6ql618rEMtSx8T50k5CTiBCkqNIhdNeeH1Rmbm");
    } else if (req.method() == http::verb::get && req.target() == "/IMD9vrsO7luEXubrKnSaa0bkW6ypau") {
        set_success_response(res, "Q1JJZed7VwPxnFssHq4xvYwbFOguyvgrWcVyWfJM5A7mX8cyM6Ajh1QnpJ3zuifI");
    } else if (req.method() == http::verb::get && req.target() == "/3c3jgZtvmRbGlZESeYxktb7ztRO3qJ") {
        set_success_response(res, "al4ukOXT6eYVAKDYML0UyjB3iTpvFvqAmmIvMORoe86OeFlQTMo3QNyPwS1acOJD");
    } else if (req.method() == http::verb::get && req.target() == "/3Q2PvVXwh1YnNlMOQIn84GxOtspIaE") {
        set_success_response(res, "Ps6GrMQCZG4eFkFsuKXTbocwag0xQdoPDY86Q3cLQdQyj1PYTO3HTEMmMlWMcMLY");
    } else if (req.method() == http::verb::get && req.target() == "/SeaoXmoTlkvzgQxzfKb4l06NbPX41l") {
        set_success_response(res, "o2HsnPWfXnwgRaFly1p6QGB41MV7O7MY0od3OsBOwAthfCS8kgmZTJbhMynEzidC");
    } else if (req.method() == http::verb::get && req.target() == "/j93NnN1MZTdtFNbuUxYWGTBt2JTDNz") {
        set_success_response(res, "j5paj1wMHqNF2EdLf2OHa6rgw6faZxcJ3ifg9MUcQtVFkQon6JYOoJh6jfOe3TX3");
    } else if (req.method() == http::verb::get && req.target() == "/8x1UJhUE2Ko01NHJQpRabbQlIOMM9U") {
        set_success_response(res, "eX8d6rFwV15LMo0XGTzNKWWDCBpCv6e89U8jTzosn8KnbiTiqM4j8Yx92c0VgHUu");
    } else if (req.method() == http::verb::get && req.target() == "/L3lqvVart0ga6CZ5YJjA9JXweFfJla") {
        set_success_response(res, "MDjW7lA7xeYObzwZATMW4oHC7Z01sjl46S3s4ZNxCRWirVpsgwiSrMAqUqTpO03d");
    } else if (req.method() == http::verb::get && req.target() == "/hIBKG99SRgRug35FBmgsjd14lfvIBj") {
        set_success_response(res, "s9ZPcJhHhRGNbWcIDkTnkdqLUEG04kvYK3gj0JcduxtOt9cwsZw1JWdRfiC27krC");
    } else if (req.method() == http::verb::get && req.target() == "/z1Tr8vfqL2HXy52LdgzVFzS7QZ8gUL") {
        set_success_response(res, "GQnZ9VQwieRXW7rjbcj9gvTBISjEWfWqgETGYz1UzdKg3DN0twd1cgvbJxRG6HBz");
    } else if (req.method() == http::verb::get && req.target() == "/be0Jtpo7q3kRRPEweXgVsGAIdjdYvC") {
        set_success_response(res, "ybCRjc6ACFsbgsaJBjXIZtacCCmXJXzrxMwvfeiAqrgxwHBzVdql2Eh7JPqtxBJ8");
    } else if (req.method() == http::verb::get && req.target() == "/YItQXowYDwQzvym6rCy0mKP9TMiNIH") {
        set_success_response(res, "zAY5ySJ7pGnRaFnE91Jre4G3XLY0rwEPyT9i4GBUGLYe0pgvQGPV7V8uZQ5rXpsY");
    } else if (req.method() == http::verb::get && req.target() == "/LrO9kv88J0NrwdIJhbc4xjuNgHrz0l") {
        set_success_response(res, "KPz2AEGEjOz3ZW4tUb5nz0xFfWBRM81Z9O6JRWJvcH9UvHfQub86qCL7ZEaRtoPh");
    } else if (req.method() == http::verb::get && req.target() == "/3m9l4h0ya73It65Z4Ff9LMoBp6lwOA") {
        set_success_response(res, "pJoWAbevtrgEUSPBZ2Mys7fQwENSJj2tsFbDzj0p0Kv5pmHwf4b7d3DpLG3lApFt");
    } else if (req.method() == http::verb::get && req.target() == "/6JlqWhOom4BFbp6vm8bVf77Qyu3xVJ") {
        set_success_response(res, "8nXh1lJ7NNWoX9nRSxn8bd6wcy71yY91gJy7nIj8Go715l6Pn5GZaDXt17IhwX1t");
    } else if (req.method() == http::verb::get && req.target() == "/fyyRaqAYiGlfYSouFyc1jNnsGmVu4H") {
        set_success_response(res, "fBjY6HzbEMChA3etTy4nzK5YjxnbvsbDhwEbYyQhOCucmDfGU3oa99HP3a79JHnL");
    } else if (req.method() == http::verb::get && req.target() == "/Qm1P0xYf5xgtWDHZGq5qSShfCNnJgz") {
        set_success_response(res, "9c1NuUHfFzNbBhHP4VEBFaUT7lmHhjsBaZdw2YNi31LreMIhTWqCYYpPIxfgmVjB");
    } else if (req.method() == http::verb::get && req.target() == "/28nMYlcPxzHhrR87roLcWmdot4FIcg") {
        set_success_response(res, "LOjDvrcOY2zU91Bb3sjYSntIJpnshWtNLtBH93dmTaLKJKfadgEZmit57b0WXJq1");
    } else if (req.method() == http::verb::get && req.target() == "/InCk8WYkl7b5w4NVeVJ7oBkG7mP8VA") {
        set_success_response(res, "aTUjTTx1ygXKM9azwR7QtI3J6RVNRXkBV1XEk2g2CNfZsTs8GogMQKyGPKAeumMn");
    } else if (req.method() == http::verb::get && req.target() == "/3WFZNEvdIZIKGhhjgPqMFnrAbfXyCP") {
        set_success_response(res, "IMUAnd9LnvDPZTY4vCkbY0b5hAXLUSt8tXJZc58kA4gqvYWdVVrYI8LLCK8mbHdD");
    } else if (req.method() == http::verb::get && req.target() == "/gZ1drl5vxcEXBtjOhSXyjk0txZriO7") {
        set_success_response(res, "8ceNjA5aYOWx1K4rRL5VIELTZdEyo0BGJgzYyGb1Tgbv6vIwHm694zYdw6LrIW89");
    } else if (req.method() == http::verb::get && req.target() == "/DK2fVS4dfEnRCjLTV3AhWhPKiNlRXT") {
        set_success_response(res, "2YK4y8HOK4RtIfMhjw4sOV5ejFiups6tvxJ5XtMMeHePgsQI2OGCuw2psBVMORZa");
    } else if (req.method() == http::verb::get && req.target() == "/IBDUeg2DJ3vqNwAbTyQ1NKUp14qzJV") {
        set_success_response(res, "26HsIk7BfIyIYbdhf0WwfCgq6GYkph1f9CjAFYlPuVXBHEMZgfflCkvhOFYyuGEA");
    } else if (req.method() == http::verb::get && req.target() == "/t5AhUPZotKTdUB0yRNVq1UmP8kmU1c") {
        set_success_response(res, "qH9wYJzYNSCQ11AEymYumZtGP1LpxAxqwuyUSZSttQlUgubo5IYlT7HprGiggMrc");
    } else if (req.method() == http::verb::get && req.target() == "/NBAXZIzeHyDt9cRtBxKrNVKVOYxnLS") {
        set_success_response(res, "7DGhuEQPjLnPytqevxH60qS3t5oEFf2hYlFrn8GZtkPgsksL293gPMDdAyJzcZDN");
    } else if (req.method() == http::verb::get && req.target() == "/UlwIYi1Xu8t9uz1Mo3xTXIW6OeLKzF") {
        set_success_response(res, "SvAiwxZRcsMbJnduUkUldddMaymBme7YEjEbwcohXgLd8xen4addAE12VdAinLe5");
    } else if (req.method() == http::verb::get && req.target() == "/cOjGvqkBH8aYCp5JX9dfMF9eDhHCqt") {
        set_success_response(res, "UpcHuFlIAZ1mXy63ZcPhSAPlVGSfhNVxgjCsSP370SjcCiYCEjw1ChfLZXRSobae");
    } else if (req.method() == http::verb::get && req.target() == "/563qEswLIPvzyVTeVilC2vK3EqWS0M") {
        set_success_response(res, "vWm2UUDHw5eVGR1R6Fe4hVYljkGBgqPxAoY1EK1jQPrQ6wJd6re6MueVkVqolbz3");
    } else if (req.method() == http::verb::get && req.target() == "/ni9MneStl7PoBfcp00R9abeQHr97h4") {
        set_success_response(res, "5F3C9DZvHuAZm0yUReiqLvS1gKttafGkFlsCZEcHeoDF07FU5shJMrv1IgLlA2WP");
    } else if (req.method() == http::verb::get && req.target() == "/1r5m0JBz5fyiwllBAQ1WKcorfb6P4T") {
        set_success_response(res, "HotUyE33CCoYFCoHFvO9Lt8hvhqYzQiCrMOXsIryViucxyKyYScUakwFyolShJuB");
    } else if (req.method() == http::verb::get && req.target() == "/zklkBLDOsUW4RnXeBJN8JXe9yjewpk") {
        set_success_response(res, "DKclxOf3hElYShu6bcC8l7fxu6Dnm2GRahxIaTslYzne2WWV0LeqjcNehOi0scDF");
    } else if (req.method() == http::verb::get && req.target() == "/IDVdloPoZ2cHDbYNaOUbgK9Bl3AsfT") {
        set_success_response(res, "b5zENTKjkLALuDfNTVtzP4x1t9kv3rC3dItjPMcB9Ywbzs7oncZyBYuUJZGIOxvx");
    } else if (req.method() == http::verb::get && req.target() == "/818cWzBbkdBpKioLEUtjAmBK3G72Wu") {
        set_success_response(res, "S0aP9gWI61IILBWDconTjIIJPsJJFCJghYxZhVYvtyDCOtNn3zZVwJqqAielMGCQ");
    } else if (req.method() == http::verb::get && req.target() == "/01gcwX5zAC2kfbHg4RaL2tS7Njyp6E") {
        set_success_response(res, "Z8Ofp3Yzr4PqbSZlsUK91wL2taHzMvSeKtxe3bBb4TBMqZxAwLHYMfcEv5fb7Yrx");
    } else if (req.method() == http::verb::get && req.target() == "/pjhNXPcoGPoGq2DroycgFOvWs6Tec3") {
        set_success_response(res, "GItDarxlHqhsTjhTgDjDhrh0lgwmLTplaasX7O7Rxwzjd08mQpVgo5Sc2knAPDBg");
    } else if (req.method() == http::verb::get && req.target() == "/ZMVzViiJH5ca2QqMHg8xyzZK7mZYom") {
        set_success_response(res, "REvPZ13UhL374pEpZzLSnYa7ZLiWyyErqJNsn0g07p8k5CVz1h2TKQq52uECErQ3");
    } else if (req.method() == http::verb::get && req.target() == "/mLhwSLCl7H1m5zFvYKlglDPwAMjLTz") {
        set_success_response(res, "zBN9Hmdzymd9arspDEqwX1FljwaIYlR0ZXKWaIjDcE8xKrsqdcB4hElsctT2rGuh");
    } else if (req.method() == http::verb::get && req.target() == "/bHkpN5nL4jNwgjEqSENGN6UZ8NwlGy") {
        set_success_response(res, "KbPyNH7Sil69Kw1XTLzCJVF533ltS5mwpy5g8vpAs2mC9SQWmXVjdxu7MRWPURKm");
    } else if (req.method() == http::verb::get && req.target() == "/L8HtcVZHXDfJJwUUKBXkTMnXRvRMPt") {
        set_success_response(res, "X9tEwcy8CKolMagHlQ4d93gbsgpWhvKC86hTTn2hCDUwbxk5r5VCiP7vg2KeyIVB");
    } else if (req.method() == http::verb::get && req.target() == "/o66wuhphKGf0R7MYwigGhreE2pDqDY") {
        set_success_response(res, "y6I3hcyRek2bX2YfPW4Rb07vVqVOkj0q36LR015Ec5TUoeKg72MUokTYT0yWZOjv");
    } else if (req.method() == http::verb::get && req.target() == "/AioP871Xo4bPZ4FdRxbx00QErNgyO2") {
        set_success_response(res, "FjsB6reCG87egBI0jIrs1O38YqO5mR85VkpfJz2XSOM9ktAUMJn8MEj8XASBVEut");
    } else if (req.method() == http::verb::get && req.target() == "/4QFAnA6Cy269EOImcqbTwwbBFFQOoK") {
        set_success_response(res, "S0AySlhfz3CVos0l5OAadgOFpq2CyeRlFuSkqLNn142V3yzemksgAnTp67xrEBl8");
    } else if (req.method() == http::verb::get && req.target() == "/vz2IvRz4CStA874ZwGa2JbN4B3vrJg") {
        set_success_response(res, "iy3Nzl2pvCmNHqwiePvHHoqT9aHnboyi6WqGuy9zPARTeVA6pS4nIwOBYxD5r5ui");
    } else if (req.method() == http::verb::get && req.target() == "/vGnIqK6DJzSf1tcNKB79vBr6QfcTL8") {
        set_success_response(res, "8MG0LrLpr6s45iYBUpsKtcIx93iTze5IQ3iIkpKx7RvAN6aAplQn6a5ujyHptXrh");
    } else if (req.method() == http::verb::get && req.target() == "/lJt5q2GwoSSjm6skHpIWkAeL5wPlp5") {
        set_success_response(res, "U0KT0ICyVl0ERZ3VOXghpevtsmubXsUQ8jTkQQ6OqElviucHQYRVpOlgTr4PBZxr");
    } else if (req.method() == http::verb::get && req.target() == "/PTZo9Vu3OjkWOBAMokdB1gbPwH11eS") {
        set_success_response(res, "ptTkgq19FXpBeY1AH18KIeq536J28MXQk9wjyblLfplO7MSluaiP4ZS3Th57zGPF");
    } else if (req.method() == http::verb::get && req.target() == "/6oiBCFURTTChjxSS7aKdAJJAEzYEW2") {
        set_success_response(res, "7JzT6oVbTK1rQk97SlhIkneRuh1oCfWFEi1dffv85NcJOsnKfxjeV6hHzHGr3U33");
    } else if (req.method() == http::verb::get && req.target() == "/1UUSDIp7KFLb9JIR34LSymUg7DqC5O") {
        set_success_response(res, "XkgCkEuslMj3kWmA0tr5UaSKfhFEkI59Sn8musoEJ37sVvholbdMbmXDCPeI6qDT");
    } else if (req.method() == http::verb::get && req.target() == "/2JEztgGDSzYzpOGdxLm6OYoPkTm0Qp") {
        set_success_response(res, "oQjRDXverh6QDtBAXBQRfTaKLk38RnvHHy3dPbEIkEnxwDirO2cjSHiqp0BNpEKO");
    } else if (req.method() == http::verb::get && req.target() == "/8y5CJjy4LEbPfRgLgZjFhlO5JviVaf") {
        set_success_response(res, "6lkusBlaXtKLOXVG1BhOfe9QhCIIvU3G8IlxEjdM90hfaFHYFFH3pyOgphbdc8Xz");
    } else if (req.method() == http::verb::get && req.target() == "/g5MPX2i1RGwZjeenWibVlJTtVn4voM") {
        set_success_response(res, "NyThmQJ0fuNwgXgm3e2mu1MLjOW88JIRAOhw49cgvD0dJouCOBbsXIakelbRVXQE");
    } else if (req.method() == http::verb::get && req.target() == "/wBOGT7l63ZeDs2BfI4t9VL2SJFZiUl") {
        set_success_response(res, "m6tA3r97QgnQVtY7EO4Ie8FrBKfhORH2jEMv4bzcuvvXY2Rdskm6KOS1UamyZW9e");
    } else if (req.method() == http::verb::get && req.target() == "/w8n3l1ig8o1dS5d2OzlCZLhevcRzYL") {
        set_success_response(res, "NFehjRf7cuA8G2N9uqc2KNuWO8y268rwlWCgWOxN0SsiBFliNTKmNtgXQAThYWxE");
    } else if (req.method() == http::verb::get && req.target() == "/UGfGh3fdr4N4KSlnw35yuXX0tEr3ZO") {
        set_success_response(res, "QBGYPZP94M7nEQ8seyaclqGZXpmNp9rU7Z32m9CzbiM5RbdOYlGzXPe33qpz1898");
    } else if (req.method() == http::verb::get && req.target() == "/rs0ZRiVHi9NUqRPhbExJcp6eJUm6wV") {
        set_success_response(res, "l7YW9zLFuO5sSWVyI74DZRvOBBgMbNGPgQgqhWnG5J5BD8B4hOP0iDiyZpwFtD7d");
    } else if (req.method() == http::verb::get && req.target() == "/YeSVizLkwutnoAJ3TIEDzexeMVE98B") {
        set_success_response(res, "tymPcTQSEOiIibITtzCQ0x59q4rdsJ9tS4qUFXNtq0pcGeugw3ZuLCjATfRIyMs0");
    } else if (req.method() == http::verb::get && req.target() == "/UzzxUj6XeryvwuKtIjoRfgJeySqCkB") {
        set_success_response(res, "HZSjdnVdfdoi8oMWdJP7cQVKOhXLddunfciMiJLCQk5psaAoKoSuVbJkR9QLNfjG");
    } else if (req.method() == http::verb::get && req.target() == "/Ots4f6DuGC4iF2kO1nw6SHTBawUM2k") {
        set_success_response(res, "GT7sbmzBfUqzdVwKuGgmwdlhyjPgPuKVe2ppi0bM8OsxeVuHdwFg0fmHiMQ9VHVk");
    } else if (req.method() == http::verb::get && req.target() == "/SFIy1TiTN5hVrt7gV0W7OtAx5eejRS") {
        set_success_response(res, "bnetjFrjSKEMbha5fL4C1i5zFVVVEuGjfRP1WfrDOpNBdCfVuj8686LH37Tv3MAU");
    } else if (req.method() == http::verb::get && req.target() == "/iuk3QkSqnp3CKSjkqU5Y9NqfxE8gLP") {
        set_success_response(res, "TmkYQ3TsLXG0IyiWeOw7fEpziZxJnf2MmYY9gm499KfsfuRWjVADIAxyDc8swQQY");
    } 
    else
    {
        res.result(http::status::not_found);
        res.set(http::field::content_type, "text/plain");
        res.body() = "Not Found";
        res.prepare_payload();
    }
}

void session(tcp::socket socket)
{
    beast::error_code ec;

    beast::flat_buffer buffer;

    http::request<http::string_body> req;
    http::read(socket, buffer, req, ec);

    if (ec == http::error::end_of_stream)
        return;

    http::response<http::string_body> res;
    handle_request(req, res);

    http::write(socket, res, ec);
}

void listener(net::io_context& ioc, tcp::endpoint endpoint)
{
    tcp::acceptor acceptor(ioc);

    acceptor.open(endpoint.protocol());
    acceptor.set_option(net::socket_base::reuse_address(true));
    acceptor.bind(endpoint);
    acceptor.listen(net::socket_base::max_listen_connections);

    for (;;)
    {
        tcp::socket socket(ioc);
        acceptor.accept(socket);
        std::thread(session, std::move(socket)).detach();
    }
}

int main()
{
    try
    {
        net::io_context ioc{1};
        tcp::endpoint endpoint{tcp::v4(), 8080};
        listener(ioc, endpoint);
    }
    catch (std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}