/* Function at 0x808F98B8, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808F98B8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x808F98CC
    /* li r30, 0 */ // 0x808F98D0
    /* b 0x808f98f8 */ // 0x808F98D4
    r0 = r30 rlwinm 3; // rlwinm
    r3 = r31 + r0; // 0x808F98DC
    r3 = *(4 + r3); // lwz @ 0x808F98E0
    r12 = *(0 + r3); // lwz @ 0x808F98E4
    r12 = *(0x18 + r12); // lwz @ 0x808F98E8
    /* mtctr r12 */ // 0x808F98EC
    /* bctrl  */ // 0x808F98F0
    r30 = r30 + 1; // 0x808F98F4
    r0 = *(2 + r31); // lbz @ 0x808F98F8
    /* clrlwi r3, r30, 0x18 */ // 0x808F98FC
    if (<) goto 0x0x808f98d8;
    /* li r30, 0 */ // 0x808F9908
    /* b 0x808f9930 */ // 0x808F990C
    r0 = r30 rlwinm 3; // rlwinm
    r3 = r31 + r0; // 0x808F9914
    r3 = *(4 + r3); // lwz @ 0x808F9918
    r12 = *(0 + r3); // lwz @ 0x808F991C
    r12 = *(0x1c + r12); // lwz @ 0x808F9920
    /* mtctr r12 */ // 0x808F9924
    /* bctrl  */ // 0x808F9928
    r30 = r30 + 1; // 0x808F992C
    r0 = *(2 + r31); // lbz @ 0x808F9930
    /* clrlwi r3, r30, 0x18 */ // 0x808F9934
    if (<) goto 0x0x808f9910;
    /* li r5, 0 */ // 0x808F9940
    /* li r4, 0 */ // 0x808F9944
    /* b 0x808f995c */ // 0x808F9948
    /* clrlwi r0, r5, 0x18 */ // 0x808F994C
    r5 = r5 + 1; // 0x808F9950
    r3 = r31 + r0; // 0x808F9954
    *(0x4ec + r3) = r4; // stb @ 0x808F9958
    r0 = *(0 + r31); // lbz @ 0x808F995C
    /* clrlwi r3, r5, 0x18 */ // 0x808F9960
    if (<) goto 0x0x808f994c;
    r3 = *(0x4e4 + r31); // lwz @ 0x808F996C
    r0 = r3 + 1; // 0x808F9970
    *(0x4e4 + r31) = r0; // stw @ 0x808F9974
    r31 = *(0xc + r1); // lwz @ 0x808F9978
    r30 = *(8 + r1); // lwz @ 0x808F997C
    r0 = *(0x14 + r1); // lwz @ 0x808F9980
    return;
}