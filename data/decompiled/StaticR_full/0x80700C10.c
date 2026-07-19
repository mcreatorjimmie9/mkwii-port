/* Function at 0x80700C10, size=60 bytes */
/* Stack frame: 496 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80700C10(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -496(r1) */
    /* saved r26 */
    /* lis r7, 0 */ // 0x80700C18
    *(0x1f4 + r1) = r0; // stw @ 0x80700C1C
    r7 = r7 + 0; // 0x80700C20
    /* stmw r26, 0x1d8(r1) */ // 0x80700C24
    r29 = r3;
    r26 = r4;
    r30 = r5;
    r31 = r6;
    /* li r4, 0 */ // 0x80700C3C
    /* li r5, 0x1c0 */ // 0x80700C40
    *(0x10 + r1) = r7; // stw @ 0x80700C44
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}