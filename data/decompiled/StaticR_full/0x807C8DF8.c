/* Function at 0x807C8DF8, size=36 bytes */
/* Stack frame: 0 bytes */

int FUN_807C8DF8(int r3, int r4, int r5)
{
    r5 = *(0xc4 + r3); // lwz @ 0x807C8DF8
    /* li r0, 0 */ // 0x807C8DFC
    r4 = r3 + 0x38; // 0x807C8E00
    *(8 + r5) = r0; // stw @ 0x807C8E04
    *(0xc + r5) = r0; // stb @ 0x807C8E08
    *(0xe8 + r3) = r0; // stw @ 0x807C8E0C
    *(0xec + r3) = r0; // stw @ 0x807C8E10
    *(0xf0 + r3) = r0; // stw @ 0x807C8E14
    /* b 0x807cf1b4 */ // 0x807C8E18
}