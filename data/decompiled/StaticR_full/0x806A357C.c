/* Function at 0x806A357C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806A357C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A3588
    r31 = r3;
    FUN_806A0780(); // bl 0x806A0780
    r3 = r31 + 0x98; // 0x806A3594
    /* li r4, 1 */ // 0x806A3598
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A35A0
    if (==) goto 0x0x806a35dc;
    r3 = r31 + 0x98; // 0x806A35AC
    /* li r4, 0 */ // 0x806A35B0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A35B8
    r4 = *(0 + r3); // lwz @ 0x806A35BC
    /* slwi r0, r0, 4 */ // 0x806A35C0
    /* lwzx r0, r4, r0 */ // 0x806A35C4
    if (==) goto 0x0x806a360c;
    /* li r0, 1 */ // 0x806A35D0
    *(0x35 + r3) = r0; // stb @ 0x806A35D4
    /* b 0x806a360c */ // 0x806A35D8
    r3 = r31 + 0x98; // 0x806A35DC
    /* li r4, 0 */ // 0x806A35E0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* li r0, 0 */ // 0x806A35E8
    *(0x35 + r3) = r0; // stb @ 0x806A35EC
    r3 = r31 + 0x98; // 0x806A35F0
    /* li r4, 0 */ // 0x806A35F4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A35FC
    /* li r4, 0 */ // 0x806A3600
    /* lfs f1, 0(r5) */ // 0x806A3604
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    r0 = *(0x14 + r1); // lwz @ 0x806A360C
    r31 = *(0xc + r1); // lwz @ 0x806A3610
    return;
}