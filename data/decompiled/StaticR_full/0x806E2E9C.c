/* Function at 0x806E2E9C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806E2E9C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806E2EA4
    *(0x14 + r1) = r0; // stw @ 0x806E2EA8
    *(0xc + r1) = r31; // stw @ 0x806E2EAC
    r31 = *(0 + r3); // lwz @ 0x806E2EB0
    if (==) goto 0x0x806e2edc;
    if (==) goto 0x0x806e2ed0;
    FUN_806EB084(); // bl 0x806EB084
    FUN_806F1090(); // bl 0x806F1090
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806E2ED0
    /* li r0, 0 */ // 0x806E2ED4
    *(0 + r3) = r0; // stw @ 0x806E2ED8
    r0 = *(0x14 + r1); // lwz @ 0x806E2EDC
    r31 = *(0xc + r1); // lwz @ 0x806E2EE0
    return;
}