/* Function at 0x80656D64, size=264 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80656D64(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x38 + r1) = r30; // stw @ 0x80656D78
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x80656D80
    r29 = r4;
    r6 = *(4 + r3); // lwz @ 0x80656D88
    if (!=) goto 0x0x80656da0;
    r0 = *(8 + r3); // lwz @ 0x80656D94
    if (==) goto 0x0x8065713c;
    if (==) goto 0x0x80656e34;
    if (==) goto 0x0x80656dbc;
    if (==) goto 0x0x80656df8;
    /* b 0x80656e30 */ // 0x80656DB8
    /* li r3, 2 */ // 0x80656DBC
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r3, 0 */ // 0x80656DC4
    /* li r4, 4 */ // 0x80656DC8
    /* li r5, 6 */ // 0x80656DCC
    /* li r6, 8 */ // 0x80656DD0
    /* li r7, 0xf */ // 0x80656DD4
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
    /* li r3, 0 */ // 0x80656DDC
    /* li r4, 2 */ // 0x80656DE0
    /* li r5, 3 */ // 0x80656DE4
    /* li r6, 4 */ // 0x80656DE8
    /* li r7, 7 */ // 0x80656DEC
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
    /* b 0x80656e30 */ // 0x80656DF4
    /* li r3, 1 */ // 0x80656DF8
    FUN_805E3430(r6, r7, r3); // bl 0x805E3430
    /* li r3, 0 */ // 0x80656E00
    /* li r4, 0xf */ // 0x80656E04
    /* li r5, 8 */ // 0x80656E08
    /* li r6, 2 */ // 0x80656E0C
    /* li r7, 0xf */ // 0x80656E10
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
    /* li r3, 0 */ // 0x80656E18
    /* li r4, 7 */ // 0x80656E1C
    /* li r5, 4 */ // 0x80656E20
    /* li r6, 1 */ // 0x80656E24
    /* li r7, 7 */ // 0x80656E28
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
    *(4 + r30) = r29; // stw @ 0x80656E30
    if (!=) goto 0x0x8065713c;
    r0 = *(8 + r30); // lwz @ 0x80656E3C
    if (==) goto 0x0x8065713c;
    r3 = *(0 + r30); // lwz @ 0x80656E48
    r12 = *(0 + r3); // lwz @ 0x80656E4C
    r12 = *(0x68 + r12); // lwz @ 0x80656E50
    /* mtctr r12 */ // 0x80656E54
    /* bctrl  */ // 0x80656E58
    r5 = *(0x10 + r3); // lhz @ 0x80656E5C
    r0 = *(0x12 + r3); // lhz @ 0x80656E64
    *(0x2a + r1) = r0; // sth @ 0x80656E68
}