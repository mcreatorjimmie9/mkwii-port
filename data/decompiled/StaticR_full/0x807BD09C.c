/* Function at 0x807BD09C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807BD09C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BD0A8
    r31 = r3;
    FUN_807BB8AC(); // bl 0x807BB8AC
    /* lis r3, 0 */ // 0x807BD0B4
    r3 = r3 + 0; // 0x807BD0B8
    *(0x34 + r31) = r3; // stw @ 0x807BD0BC
    FUN_807C02F8(r3, r3); // bl 0x807C02F8
    if (==) goto 0x0x807bd0ec;
    /* li r3, 0xc */ // 0x807BD0CC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807bd0e4;
}