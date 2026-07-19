/* Function at 0x80673DF8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80673DF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80673E08
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80673E10
    r30 = r3;
    if (==) goto 0x0x80673e80;
    /* lis r4, 0 */ // 0x80673E1C
    /* li r5, 0x17c */ // 0x80673E20
    r4 = r4 + 0; // 0x80673E24
    /* li r6, 4 */ // 0x80673E28
    r3 = r3 + 0x5f8; // 0x80673E2C
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x484; // 0x80673E34
    /* li r4, -1 */ // 0x80673E38
    FUN_806A0540(r6, r3, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x310; // 0x80673E40
    /* li r4, -1 */ // 0x80673E44
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x19c; // 0x80673E4C
}