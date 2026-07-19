/* Function at 0x806981C4, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806981C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806981D4
    r30 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x806981DC
    if (==) goto 0x0x80698204;
    /* lis r4, 0 */ // 0x806981E8
    r4 = *(0 + r4); // lwz @ 0x806981EC
    r0 = *(0x70 + r4); // lwz @ 0x806981F0
    if (!=) goto 0x0x80698204;
    r3 = r3 + 0x34; // 0x806981FC
    FUN_8067F608(r3); // bl 0x8067F608
    r3 = *(0x18 + r30); // lwz @ 0x80698204
    /* li r0, 0 */ // 0x80698208
    r31 = *(0xc + r30); // lwz @ 0x8069820C
    /* li r4, -1 */ // 0x80698210
    *(0x14 + r30) = r3; // stw @ 0x80698214
    r3 = r31;
    *(0xc + r30) = r4; // stw @ 0x8069821C
    *(0x1c + r30) = r0; // stw @ 0x80698220
    *(0x18 + r30) = r0; // stw @ 0x80698224
    *(0x2c + r30) = r4; // stw @ 0x80698228
    *(0x30 + r30) = r0; // stw @ 0x8069822C
    FUN_80694774(); // bl 0x80694774
    r0 = r3 + -2; // 0x80698234
    r3 = r30 + 0x34; // 0x80698238
    /* cntlzw r0, r0 */ // 0x8069823C
    /* srwi r0, r0, 5 */ // 0x80698240
    /* cntlzw r0, r0 */ // 0x80698244
    /* srwi r4, r0, 5 */ // 0x80698248
    FUN_8067F39C(r3); // bl 0x8067F39C
    /* li r3, 0x408 */ // 0x80698250
    FUN_805E3430(r3); // bl 0x805E3430
}