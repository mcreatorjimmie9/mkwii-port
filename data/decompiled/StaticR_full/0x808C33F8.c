/* Function at 0x808C33F8, size=112 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808C33F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x808C3400
    *(0x68 + r1) = r30; // stw @ 0x808C340C
    r30 = r4;
    /* li r4, 0 */ // 0x808C3414
    *(0x64 + r1) = r29; // stw @ 0x808C3418
    r29 = r3;
    FUN_806724E0(r4); // bl 0x806724E0
    if (==) goto 0x0x808c3438;
    if (==) goto 0x0x808c3608;
    /* b 0x808c37b8 */ // 0x808C3434
    /* li r3, 0x174 */ // 0x808C3438
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808c3454;
    FUN_806A0418(r3); // bl 0x806A0418
    r31 = r3;
    r3 = r29;
    r4 = r30;
    r5 = r31;
    /* li r6, 0 */ // 0x808C3460
    FUN_80671C2C(r3, r4, r5, r6); // bl 0x80671C2C
}