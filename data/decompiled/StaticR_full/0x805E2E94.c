/* Function at 0x805E2E94, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_805E2E94(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x805E2E9C
    *(0x14 + r1) = r0; // stw @ 0x805E2EA0
    *(0xc + r1) = r31; // stw @ 0x805E2EA4
    r3 = *(0 + r3); // lwz @ 0x805E2EA8
    r0 = *(0x4c + r3); // lbz @ 0x805E2EAC
    if (!=) goto 0x0x805e2ed4;
    /* lis r31, 0 */ // 0x805E2EB8
    r3 = *(0 + r31); // lwz @ 0x805E2EBC
    FUN_806986C8(); // bl 0x806986C8
    r3 = *(0 + r31); // lwz @ 0x805E2EC4
    r3 = *(0 + r3); // lwz @ 0x805E2EC8
    r3 = *(0x38b + r3); // lbz @ 0x805E2ECC
    /* b 0x805e2ed8 */ // 0x805E2ED0
    /* li r3, 1 */ // 0x805E2ED4
    r0 = *(0x14 + r1); // lwz @ 0x805E2ED8
    r31 = *(0xc + r1); // lwz @ 0x805E2EDC
    return;
}