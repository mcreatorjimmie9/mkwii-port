/* Function at 0x808C2BC8, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808C2BC8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808C2BE0
    *(0x10 + r1) = r28; // stw @ 0x808C2BE4
    FUN_808B3318(); // bl 0x808B3318
    /* lis r3, 0 */ // 0x808C2BEC
    r3 = *(0 + r3); // lwz @ 0x808C2BF0
    r3 = *(0 + r3); // lwz @ 0x808C2BF4
    r3 = *(0 + r3); // lwz @ 0x808C2BF8
    FUN_80694774(r3); // bl 0x80694774
    if (==) goto 0x0x808c2c24;
    /* lis r5, 0 */ // 0x808C2C08
    r3 = r31;
    r0 = *(0 + r5); // lwz @ 0x808C2C10
    *(8 + r1) = r0; // stw @ 0x808C2C18
    /* li r5, 1 */ // 0x808C2C1C
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r3, 0 */ // 0x808C2C24
    r5 = *(0 + r3); // lwz @ 0x808C2C28
    r0 = *(0x36 + r5); // lha @ 0x808C2C2C
    if (<) goto 0x0x808c2c54;
    /* lis r3, 1 */ // 0x808C2C38
    /* clrlwi r4, r0, 0x18 */ // 0x808C2C3C
    r0 = r3 + -0x6c10; // 0x808C2C40
    r0 = r0 * r4; // 0x808C2C44
    r3 = r5 + r0; // 0x808C2C48
    r29 = r3 + 0x38; // 0x808C2C4C
    /* b 0x808c2c58 */ // 0x808C2C50
    /* li r29, 0 */ // 0x808C2C54
    /* li r28, 0 */ // 0x808C2C58
    /* li r30, 1 */ // 0x808C2C5C
    r3 = *(0x6bc + r31); // lwz @ 0x808C2C60
    r0 = r30 << r28; // slw
    /* and. r0, r3, r0 */ // 0x808C2C68
    if (==) goto 0x0x808c2cbc;
    /* addis r3, r29, 1 */ // 0x808C2C70
    r0 = *(-0x6edc + r3); // lwz @ 0x808C2C74
    if (!=) goto 0x0x808c2ca0;
    r12 = *(0 + r31); // lwz @ 0x808C2C80
    r3 = r31;
    r4 = *(0x48 + r31); // lwz @ 0x808C2C88
    r12 = *(0x78 + r12); // lwz @ 0x808C2C8C
    r4 = *(0 + r4); // lwz @ 0x808C2C90
    /* mtctr r12 */ // 0x808C2C94
    /* bctrl  */ // 0x808C2C98
    /* b 0x808c2cbc */ // 0x808C2C9C
    r12 = *(0 + r31); // lwz @ 0x808C2CA0
    r3 = r31;
    r4 = *(0x48 + r31); // lwz @ 0x808C2CA8
    r12 = *(0x78 + r12); // lwz @ 0x808C2CAC
    r4 = *(4 + r4); // lwz @ 0x808C2CB0
    /* mtctr r12 */ // 0x808C2CB4
    /* bctrl  */ // 0x808C2CB8
    r28 = r28 + 1; // 0x808C2CBC
    if (<) goto 0x0x808c2c60;
    r0 = *(0x24 + r1); // lwz @ 0x808C2CC8
    r31 = *(0x1c + r1); // lwz @ 0x808C2CCC
    r30 = *(0x18 + r1); // lwz @ 0x808C2CD0
    r29 = *(0x14 + r1); // lwz @ 0x808C2CD4
    r28 = *(0x10 + r1); // lwz @ 0x808C2CD8
    return;
}