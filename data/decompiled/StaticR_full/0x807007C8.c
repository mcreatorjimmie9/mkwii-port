/* Function at 0x807007C8, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807007C8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807007DC
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x807007E4
    r29 = r4;
    /* li r4, 2 */ // 0x807007EC
    *(0x10 + r1) = r28; // stw @ 0x807007F0
    r28 = r3;
    *(0x4204 + r3) = r6; // stw @ 0x807007F8
    if (!=) goto 0x0x80700804;
    /* li r4, 3 */ // 0x80700800
    /* li r0, 0 */ // 0x80700804
    *(0x4200 + r3) = r4; // stw @ 0x80700808
    /* li r4, 0 */ // 0x8070080C
    /* li r5, 0x2800 */ // 0x80700810
    *(0x420c + r3) = r0; // stw @ 0x80700814
    r3 = r3 + 0x4210; // 0x80700818
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}