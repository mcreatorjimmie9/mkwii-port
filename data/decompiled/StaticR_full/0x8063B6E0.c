/* Function at 0x8063B6E0, size=216 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_8063B6E0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    r10 = r5 + r7; // 0x8063B6E8
    r3 = r6 + r8; // 0x8063B6EC
    *(0x34 + r1) = r0; // stw @ 0x8063B6F0
    r0 = r3 + -1; // 0x8063B6F8
    /* li r3, 0 */ // 0x8063B6FC
    /* stmw r25, 0x14(r1) */ // 0x8063B700
    r12 = r10 / r7; // 0x8063B704
    /* li r29, 0 */ // 0x8063B708
    r30 = r4;
    r31 = r0 / r8; // 0x8063B710
    /* b 0x8063b7a0 */ // 0x8063B714
    /* li r28, 0 */ // 0x8063B718
    /* li r10, 0 */ // 0x8063B71C
    /* b 0x8063b790 */ // 0x8063B720
    /* li r27, 0 */ // 0x8063B724
    /* b 0x8063b780 */ // 0x8063B728
    /* li r26, 0 */ // 0x8063B730
    if (<=) goto 0x0x8063b77c;
    r25 = r27 + r3; // 0x8063B738
    r11 = r25 * r5; // 0x8063B73C
    /* mtctr r7 */ // 0x8063B740
    if (<=) goto 0x0x8063b77c;
    r0 = r26 + r10; // 0x8063B74C
    if (==) goto 0x0x8063b768;
    r0 = r0 * r6; // 0x8063B754
    r0 = r25 + r0; // 0x8063B758
    *(0 + r30) = r0; // sth @ 0x8063B75C
    r30 = r30 + 2; // 0x8063B760
    /* b 0x8063b774 */ // 0x8063B764
    r0 = r0 + r11; // 0x8063B768
    *(0 + r30) = r0; // sth @ 0x8063B76C
    r30 = r30 + 2; // 0x8063B770
    r26 = r26 + 1; // 0x8063B774
    if (counter-- != 0) goto 0x0x8063b748;
    r27 = r27 + 1; // 0x8063B77C
    if (<) goto 0x0x8063b72c;
    r10 = r10 + r7; // 0x8063B788
    r28 = r28 + 1; // 0x8063B78C
    if (<) goto 0x0x8063b724;
    r3 = r3 + r8; // 0x8063B798
    r29 = r29 + 1; // 0x8063B79C
    if (<) goto 0x0x8063b718;
    /* slwi r0, r5, 1 */ // 0x8063B7A8
    r3 = r4;
    r4 = r6 * r0; // 0x8063B7B0
    FUN_805E3430(r3); // bl 0x805E3430
}