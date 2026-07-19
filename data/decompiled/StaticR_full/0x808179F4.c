/* Function at 0x808179F4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808179F4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80817A04
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80817A0C
    r30 = r3;
    if (==) goto 0x0x80817a60;
    /* lis r5, 0 */ // 0x80817A18
    /* lis r4, 0 */ // 0x80817A1C
    r5 = r5 + 0; // 0x80817A20
    *(0 + r3) = r5; // stw @ 0x80817A24
    r3 = *(0 + r4); // lwz @ 0x80817A28
    if (==) goto 0x0x80817a44;
    /* li r0, 0 */ // 0x80817A34
    *(0 + r4) = r0; // stw @ 0x80817A38
    /* li r4, 1 */ // 0x80817A3C
    FUN_80817EB8(r4); // bl 0x80817EB8
    r3 = r30;
    /* li r4, 0 */ // 0x80817A48
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80817a60;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80817A64
    r30 = *(8 + r1); // lwz @ 0x80817A68
}