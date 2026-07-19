/* Function at 0x808862FC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808862FC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80886310
    FUN_808A0278(); // bl 0x808A0278
    /* lis r3, 0 */ // 0x80886318
    r3 = *(0 + r3); // lwz @ 0x8088631C
    r0 = *(0x25 + r3); // lbz @ 0x80886320
    if (!=) goto 0x0x808864a0;
    /* li r3, 0x4c */ // 0x8088632C
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
}