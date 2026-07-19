/* Function at 0x80672728, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80672728(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80672738
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80672740
    r30 = r3;
    if (==) goto 0x0x8067278c;
    /* li r4, -1 */ // 0x8067274C
    r3 = r3 + 0x654; // 0x80672750
    FUN_80668158(r4, r3); // bl 0x80668158
    /* lis r4, 0 */ // 0x80672758
    r3 = r30 + 0x44; // 0x8067275C
    r4 = r4 + 0; // 0x80672760
    /* li r5, 0x184 */ // 0x80672764
    /* li r6, 4 */ // 0x80672768
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80672774
    FUN_806711C4(r5, r6, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8067278c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}