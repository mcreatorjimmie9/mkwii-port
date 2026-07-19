/* Function at 0x80751758, size=160 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80751758(int r3, int r4)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80751760
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x80751770
    *(0x54 + r1) = r29; // stw @ 0x80751774
    r0 = *(0xc4 + r3); // lwz @ 0x80751778
    *(0xd1 + r3) = r4; // stb @ 0x8075177C
    *(0xda + r3) = r4; // stb @ 0x80751784
    *(0xde + r3) = r4; // stb @ 0x80751788
    if (==) goto 0x0x80751794;
    FUN_80750764(); // bl 0x80750764
    r3 = *(0xb4 + r31); // lwz @ 0x80751794
    if (>) goto 0x0x807517a8;
    r0 = r3 + 1; // 0x807517A0
    *(0xb4 + r31) = r0; // stw @ 0x807517A4
    r0 = *(0xd8 + r31); // lha @ 0x807517A8
    if (==) goto 0x0x807517bc;
    r3 = r31;
    FUN_80750C64(r3); // bl 0x80750C64
    r0 = *(0xdc + r31); // lha @ 0x807517BC
    if (==) goto 0x0x807517d0;
    r3 = r31;
    FUN_80750DA0(r3); // bl 0x80750DA0
    r3 = *(8 + r31); // lwz @ 0x807517D0
    r3 = *(0x10 + r3); // lwz @ 0x807517D4
    r3 = *(0 + r3); // lwz @ 0x807517D8
    if (==) goto 0x0x807517f4;
    r3 = r3 + 0xc; // 0x807517E4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x807517fc */ // 0x807517F0
}