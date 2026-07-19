/* Function at 0x80660B08, size=288 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_80660B08(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x84 + r1) = r29; // stw @ 0x80660B20
    r29 = r3;
    r4 = r29;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x80660B34
    /* li r0, 8 */ // 0x80660B38
    r3 = r3 + 0; // 0x80660B3C
    r4 = r3 + -4; // 0x80660B44
    /* mtctr r0 */ // 0x80660B48
    r3 = *(4 + r4); // lwz @ 0x80660B4C
    r0 = *(8 + r4); // lwzu @ 0x80660B50
    *(4 + r5) = r3; // stw @ 0x80660B54
    *(8 + r5) = r0; // stwu @ 0x80660B58
    if (counter-- != 0) goto 0x0x80660b4c;
    r0 = *(4 + r4); // lwz @ 0x80660B60
    /* lis r31, 0 */ // 0x80660B64
    r31 = r31 + 0; // 0x80660B68
    *(4 + r5) = r0; // stw @ 0x80660B6C
    r6 = r30;
    r4 = r31 + 0x11; // 0x80660B78
    r5 = r31 + 0x19; // 0x80660B7C
    FUN_8064E36C(r6, r3, r4, r5, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80660B8C
    FUN_8064E32C(r5, r7, r3, r4); // bl 0x8064E32C
    r3 = r29 + 0x174; // 0x80660B94
    /* li r4, 1 */ // 0x80660B98
    /* li r5, 1 */ // 0x80660B9C
    /* li r6, 0 */ // 0x80660BA0
    FUN_8066D808(r3, r4, r5, r6); // bl 0x8066D808
    r3 = r29;
    r4 = r31 + 0x23; // 0x80660BAC
    r5 = r29 + 0x174; // 0x80660BB0
    /* li r6, 0 */ // 0x80660BB4
    /* li r7, 0 */ // 0x80660BB8
    FUN_806A105C(r3, r4, r5, r6, r7); // bl 0x806A105C
    r3 = r29 + 0x98; // 0x80660BC0
    /* li r4, 0 */ // 0x80660BC4
    FUN_8069F4A0(r6, r7, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80660BCC
    /* li r4, 0 */ // 0x80660BD0
    /* lfs f1, 0(r31) */ // 0x80660BD4
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x80660BDC
    /* li r4, 1 */ // 0x80660BE0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80660BE8
    /* li r4, 2 */ // 0x80660BEC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x80660BF4
    /* li r4, 2 */ // 0x80660BF8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80660C00
    /* li r4, 1 */ // 0x80660C04
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x94 + r1); // lwz @ 0x80660C0C
    r31 = *(0x8c + r1); // lwz @ 0x80660C10
    r30 = *(0x88 + r1); // lwz @ 0x80660C14
    r29 = *(0x84 + r1); // lwz @ 0x80660C18
    return;
}