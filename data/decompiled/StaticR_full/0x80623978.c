/* Function at 0x80623978, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80623978(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80623980
    *(0x24 + r1) = r0; // stw @ 0x80623984
    /* lfs f0, 0(r4) */ // 0x80623988
    *(0x1c + r1) = r31; // stw @ 0x80623990
    r31 = r3;
    /* stfs f0, 8(r1) */ // 0x80623998
    /* stfs f0, 0xc(r1) */ // 0x8062399C
    /* stfs f0, 0x10(r1) */ // 0x806239A0
    FUN_8061EEE0(); // bl 0x8061EEE0
    r3 = r31;
    FUN_806239F8(r3); // bl 0x806239F8
    r3 = *(0x1c + r31); // lwz @ 0x806239B0
    FUN_80621E10(r3); // bl 0x80621E10
    r3 = *(0x10 + r31); // lwz @ 0x806239B8
    r12 = *(0xc + r3); // lwz @ 0x806239BC
    r12 = *(0x10 + r12); // lwz @ 0x806239C0
    /* mtctr r12 */ // 0x806239C4
    /* bctrl  */ // 0x806239C8
    r3 = *(0x14 + r31); // lwz @ 0x806239CC
    FUN_805F70BC(); // bl 0x805F70BC
    r3 = r31;
    FUN_8061EE94(r3); // bl 0x8061EE94
    /* li r4, 0 */ // 0x806239DC
    FUN_80645140(r3, r4); // bl 0x80645140
    r0 = *(0x24 + r1); // lwz @ 0x806239E4
    r31 = *(0x1c + r1); // lwz @ 0x806239E8
    return;
}