/* Function at 0x80656B18, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80656B18(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r5 = *(0xa + r4); // lhz @ 0x80656B20
    *(0xc + r1) = r31; // stw @ 0x80656B2C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80656B34
    r30 = r3;
    if (==) goto 0x0x80656be8;
    r6 = *(0 + r4); // lha @ 0x80656B40
    r0 = *(2 + r4); // lha @ 0x80656B44
    if (<) goto 0x0x80656be8;
    r4 = *(8 + r4); // lhz @ 0x80656B50
    FUN_80656D64(); // bl 0x80656D64
    r3 = *(0xc + r31); // lwz @ 0x80656B58
    r0 = *(0xc + r30); // lwz @ 0x80656B5C
    if (==) goto 0x0x80656b74;
    *(0xc + r30) = r3; // stw @ 0x80656B68
    /* li r4, 0 */ // 0x80656B6C
    FUN_805E3430(r4); // bl 0x805E3430
    /* li r3, 0x80 */ // 0x80656B74
    /* li r4, 0 */ // 0x80656B78
    /* li r5, 4 */ // 0x80656B7C
    FUN_805E3430(r4, r3, r4, r5); // bl 0x805E3430
    /* lis r5, -0x33ff */ // 0x80656B84
    r6 = *(4 + r31); // lha @ 0x80656B88
    *(-0x8000 + r5) = r6; // sth @ 0x80656B8C
    r7 = *(0 + r31); // lha @ 0x80656B90
    *(-0x8000 + r5) = r7; // sth @ 0x80656B94
    r4 = *(0x10 + r31); // lhz @ 0x80656B98
}