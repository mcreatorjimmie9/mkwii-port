/* Function at 0x80872754, size=132 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80872754(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* lis r4, 0 */ // 0x80872768
    /* lfs f1, 4(r31) */ // 0x8087276C
    *(0x38 + r1) = r30; // stw @ 0x80872770
    r30 = r3;
    r4 = r4 + 0; // 0x8087277C
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lis r4, 0 */ // 0x80872784
    /* lfs f1, 0(r31) */ // 0x80872788
    r4 = r4 + 0; // 0x80872790
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x808727A8
    /* stfs f0, 0x17c(r30) */ // 0x808727AC
    /* lfs f0, 0xc(r1) */ // 0x808727B0
    /* stfs f0, 0x180(r30) */ // 0x808727B4
    /* lfs f0, 0x10(r1) */ // 0x808727B8
    /* stfs f0, 0x184(r30) */ // 0x808727BC
    r31 = *(0x3c + r1); // lwz @ 0x808727C0
    r30 = *(0x38 + r1); // lwz @ 0x808727C4
    r0 = *(0x44 + r1); // lwz @ 0x808727C8
    return;
}