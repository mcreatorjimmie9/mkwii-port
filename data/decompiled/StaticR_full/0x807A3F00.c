/* Function at 0x807A3F00, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807A3F00(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x807A3F08
    *(0x14 + r1) = r29; // stw @ 0x807A3F18
    *(0x10 + r1) = r28; // stw @ 0x807A3F1C
    r28 = r3;
    r4 = *(0 + r4); // lwz @ 0x807A3F24
    r0 = *(0x8a4 + r3); // lbz @ 0x807A3F28
    r30 = *(0x51 + r4); // lbz @ 0x807A3F2C
    if (==) goto 0x0x807a3f8c;
    /* lis r3, 0 */ // 0x807A3F38
    r3 = *(0 + r3); // lwz @ 0x807A3F3C
    if (==) goto 0x0x807a3f50;
    r0 = *(0x4c + r3); // lbz @ 0x807A3F48
    /* b 0x807a3f54 */ // 0x807A3F4C
    /* li r0, 1 */ // 0x807A3F50
    if (!=) goto 0x0x807a3f8c;
    /* li r29, 0 */ // 0x807A3F5C
    /* lis r31, 0 */ // 0x807A3F60
    r3 = *(0 + r31); // lwz @ 0x807A3F64
    r4 = r29;
    r3 = *(0x5bc + r3); // lwz @ 0x807A3F6C
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = r30;
    /* li r5, 0 */ // 0x807A3F78
    FUN_805E3430(r4, r4, r5); // bl 0x805E3430
    r29 = r29 + 1; // 0x807A3F80
    if (<) goto 0x0x807a3f64;
    *(0x8a4 + r28) = r30; // stb @ 0x807A3F8C
    r31 = *(0x1c + r1); // lwz @ 0x807A3F90
    r30 = *(0x18 + r1); // lwz @ 0x807A3F94
}