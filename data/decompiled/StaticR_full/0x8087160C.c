/* Function at 0x8087160C, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_8087160C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x80871624
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x8087162C
    r28 = r4;
    r30 = *(0x240 + r4); // lwz @ 0x80871634
    if (!=) goto 0x0x80871644;
    /* li r3, 0 */ // 0x8087163C
    /* b 0x8087169c */ // 0x80871640
    /* lis r31, 0 */ // 0x80871644
    r31 = r31 + 0; // 0x80871648
    if (==) goto 0x0x80871698;
    r12 = *(0 + r28); // lwz @ 0x80871650
    r3 = r28;
    r12 = *(0x28 + r12); // lwz @ 0x80871658
    /* mtctr r12 */ // 0x8087165C
    /* bctrl  */ // 0x80871660
    /* b 0x8087167c */ // 0x80871664
    if (!=) goto 0x0x80871678;
    /* li r0, 1 */ // 0x80871670
    /* b 0x80871688 */ // 0x80871674
    r3 = *(0 + r3); // lwz @ 0x80871678
    if (!=) goto 0x0x80871668;
    /* li r0, 0 */ // 0x80871684
    if (==) goto 0x0x80871698;
    r3 = r28;
    /* b 0x8087169c */ // 0x80871694
    /* li r3, 0 */ // 0x80871698
    r4 = r29;
    /* li r5, 0xff */ // 0x808716A0
    FUN_80872140(r3, r3, r4, r5); // bl 0x80872140
    r3 = r28;
    r4 = r29 + 0x9fb; // 0x808716AC
    /* li r5, 0 */ // 0x808716B0
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* li r3, 0x6b */ // 0x808716B8
    FUN_808B6A8C(r3, r4, r5, r3); // bl 0x808B6A8C
    r4 = r28;
    r5 = r30;
    r6 = r29;
    FUN_808B75E8(r3, r4, r5, r6); // bl 0x808B75E8
    /* lis r3, 0 */ // 0x808716D0
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808716D8
    r5 = r30;
    FUN_808F7F90(r3, r4, r5); // bl 0x808F7F90
    r0 = *(0x24 + r1); // lwz @ 0x808716E4
    r31 = *(0x1c + r1); // lwz @ 0x808716E8
    r30 = *(0x18 + r1); // lwz @ 0x808716EC
    r29 = *(0x14 + r1); // lwz @ 0x808716F0
    r28 = *(0x10 + r1); // lwz @ 0x808716F4
    return;
}