/* Function at 0x80670D64, size=344 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80670D64(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xd8 + r1) = r30; // stw @ 0x80670D74
    r30 = r3;
    r0 = *(0x17c + r3); // lbz @ 0x80670D7C
    if (==) goto 0x0x80670dd8;
    r0 = *(0x174 + r3); // lwz @ 0x80670D88
    if (==) goto 0x0x80670db0;
    if (==) goto 0x0x80670db8;
    if (==) goto 0x0x80670dc0;
    if (==) goto 0x0x80670dc8;
    /* b 0x80670dd0 */ // 0x80670DAC
    /* li r31, 0 */ // 0x80670DB0
    /* b 0x80670ddc */ // 0x80670DB4
    /* li r31, 1 */ // 0x80670DB8
    /* b 0x80670ddc */ // 0x80670DBC
    /* li r31, 2 */ // 0x80670DC0
    /* b 0x80670ddc */ // 0x80670DC4
    /* li r31, 3 */ // 0x80670DC8
    /* b 0x80670ddc */ // 0x80670DCC
    /* li r31, 4 */ // 0x80670DD0
    /* b 0x80670ddc */ // 0x80670DD4
    /* li r31, 4 */ // 0x80670DD8
    /* li r4, 1 */ // 0x80670DDC
    r3 = r3 + 0x98; // 0x80670DE0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80670DE8
    r4 = r31;
    /* lfs f1, 0(r5) */ // 0x80670DF0
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x178 + r30); // lwz @ 0x80670DF8
    /* clrlwi r0, r0, 0x1c */ // 0x80670DFC
    if (==) goto 0x0x80670e24;
    if (==) goto 0x0x80670e2c;
    if (==) goto 0x0x80670e34;
    if (==) goto 0x0x80670e3c;
    /* b 0x80670e44 */ // 0x80670E20
    /* li r31, 1 */ // 0x80670E24
    /* b 0x80670e48 */ // 0x80670E28
    /* li r31, 2 */ // 0x80670E2C
    /* b 0x80670e48 */ // 0x80670E30
    /* li r31, 3 */ // 0x80670E34
    /* b 0x80670e48 */ // 0x80670E38
    /* li r31, 4 */ // 0x80670E3C
    /* b 0x80670e48 */ // 0x80670E40
    /* li r31, 0 */ // 0x80670E44
    r3 = r30 + 0x98; // 0x80670E48
    /* li r4, 2 */ // 0x80670E4C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80670E54
    r4 = r31;
    /* lfs f1, 0(r5) */ // 0x80670E5C
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x178 + r30); // lwz @ 0x80670E64
    /* rlwinm. r0, r0, 0, 0x14, 0x1b */ // 0x80670E68
    if (==) goto 0x0x80670e9c;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0x174 + r30); // lwz @ 0x80670E78
    r3 = r30;
    *(0x80 + r1) = r0; // stw @ 0x80670E80
    /* li r4, 0x251e */ // 0x80670E88
    r0 = *(0x17c + r30); // lbz @ 0x80670E8C
    *(0xc8 + r1) = r0; // stb @ 0x80670E90
    FUN_806A0A34(r5, r4); // bl 0x806A0A34
    /* b 0x80670ea4 */ // 0x80670E98
    r3 = r30;
    FUN_806A0C48(r3); // bl 0x806A0C48
    r0 = *(0xe4 + r1); // lwz @ 0x80670EA4
    r31 = *(0xdc + r1); // lwz @ 0x80670EA8
    r30 = *(0xd8 + r1); // lwz @ 0x80670EAC
    return;
}