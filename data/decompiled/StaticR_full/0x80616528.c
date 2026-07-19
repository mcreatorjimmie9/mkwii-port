/* Function at 0x80616528, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80616528(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80616534
    r31 = r3;
    FUN_80611008(); // bl 0x80611008
    r12 = *(0xc + r31); // lwz @ 0x80616540
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x80616548
    /* mtctr r12 */ // 0x8061654C
    /* bctrl  */ // 0x80616550
    /* lis r3, 0 */ // 0x80616554
    /* li r0, 0 */ // 0x80616558
    /* lfs f0, 0(r3) */ // 0x8061655C
    /* stfs f0, 0x294(r31) */ // 0x80616560
    /* stfs f0, 0x298(r31) */ // 0x80616564
    /* stfs f0, 0x29c(r31) */ // 0x80616568
    /* stfs f0, 0x2a0(r31) */ // 0x8061656C
    /* stfs f0, 0x2a4(r31) */ // 0x80616570
    *(0x2a8 + r31) = r0; // stw @ 0x80616574
    *(0x2ac + r31) = r0; // stb @ 0x80616578
    *(0x2b0 + r31) = r0; // stw @ 0x8061657C
    *(0x2b4 + r31) = r0; // sth @ 0x80616580
    *(0x2b6 + r31) = r0; // sth @ 0x80616584
    /* stfs f0, 0x2b8(r31) */ // 0x80616588
    *(0x2bc + r31) = r0; // sth @ 0x8061658C
    r31 = *(0xc + r1); // lwz @ 0x80616590
    r0 = *(0x14 + r1); // lwz @ 0x80616594
    return;
}