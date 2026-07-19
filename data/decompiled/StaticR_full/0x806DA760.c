/* Function at 0x806DA760, size=232 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806DA760(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806DA768
    *(0xe8 + r1) = r30; // stw @ 0x806DA774
    *(0xe4 + r1) = r29; // stw @ 0x806DA778
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806DA780
    r3 = *(0 + r3); // lwz @ 0x806DA784
    r30 = *(0x2a4 + r3); // lwz @ 0x806DA788
    if (!=) goto 0x0x806da79c;
    /* li r30, 0 */ // 0x806DA794
    /* b 0x806da7f0 */ // 0x806DA798
    /* lis r31, 0 */ // 0x806DA79C
    r31 = r31 + 0; // 0x806DA7A0
    if (==) goto 0x0x806da7ec;
    r12 = *(0 + r30); // lwz @ 0x806DA7A8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806DA7B0
    /* mtctr r12 */ // 0x806DA7B4
    /* bctrl  */ // 0x806DA7B8
    /* b 0x806da7d4 */ // 0x806DA7BC
    if (!=) goto 0x0x806da7d0;
    /* li r0, 1 */ // 0x806DA7C8
    /* b 0x806da7e0 */ // 0x806DA7CC
    r3 = *(0 + r3); // lwz @ 0x806DA7D0
    if (!=) goto 0x0x806da7c0;
    /* li r0, 0 */ // 0x806DA7DC
    if (==) goto 0x0x806da7ec;
    /* b 0x806da7f0 */ // 0x806DA7E8
    /* li r30, 0 */ // 0x806DA7EC
    r4 = r29 + 0x68; // 0x806DA7F4
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    r0 = *(0xcc + r1); // lwz @ 0x806DA7FC
    if (!=) goto 0x0x806da818;
    /* lis r3, 0 */ // 0x806DA808
    r3 = *(0 + r3); // lwz @ 0x806DA80C
    r3 = *(0x90 + r3); // lwz @ 0x806DA810
    FUN_806845FC(r3); // bl 0x806845FC
    r3 = r30;
    r4 = r29 + 0x68; // 0x806DA81C
    /* li r5, 0 */ // 0x806DA820
    FUN_8065FB58(r3, r4, r5); // bl 0x8065FB58
    /* li r0, 6 */ // 0x806DA828
    /* lis r4, 0 */ // 0x806DA82C
    *(0x2874 + r29) = r0; // stw @ 0x806DA830
    r4 = r4 + 0; // 0x806DA838
    /* li r5, 0xc */ // 0x806DA83C
    /* li r6, 5 */ // 0x806DA840
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
}