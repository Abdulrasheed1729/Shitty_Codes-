module sillyfunction(input logic a, b, c, output y);

    assign y=~a & ~b & ~c | a & ~b & ~c | a & ~b & c;

endmodule