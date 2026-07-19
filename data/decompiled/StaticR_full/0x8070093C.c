/* Function at 0x8070093C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8070093C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* mulli r0, r4, 0x70 */ // 0x80700948
    /* li r4, 5 */ // 0x8070094C
    *(0xc + r1) = r31; // stw @ 0x80700950
    *(8 + r1) = r30; // stw @ 0x80700954
    r30 = r3;
    *(0x4204 + r3) = r5; // stw @ 0x8070095C
    /* li r5, 0x2800 */ // 0x80700960
    *(0x4200 + r3) = r4; // stw @ 0x80700964
    r4 = r3 + r0; // 0x80700968
    r0 = *(0x75a4 + r4); // lwz @ 0x8070096C
    /* li r4, 0 */ // 0x80700970
    *(0x420c + r3) = r0; // stw @ 0x80700974
    r3 = r3 + 0x4210; // 0x80700978
    FUN_805E3430(r4, r3); // bl 0x805E3430
}