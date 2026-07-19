/* Function at 0x808C1E3C, size=296 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808C1E3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C1E44
    *(0x1c + r1) = r31; // stw @ 0x808C1E4C
    /* li r31, 2 */ // 0x808C1E50
    *(0x18 + r1) = r30; // stw @ 0x808C1E54
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x808C1E5C
    r4 = *(0x98 + r4); // lwz @ 0x808C1E60
    *(0x74 + r4) = r31; // stw @ 0x808C1E64
    FUN_808B3318(); // bl 0x808B3318
    /* lis r5, 0 */ // 0x808C1E6C
    r3 = r30;
    r0 = *(0 + r5); // lwz @ 0x808C1E74
    *(8 + r1) = r0; // stw @ 0x808C1E7C
    /* li r5, 1 */ // 0x808C1E80
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r5, 0 */ // 0x808C1E88
    /* li r4, 0 */ // 0x808C1E8C
    r3 = *(0 + r5); // lwz @ 0x808C1E90
    /* mulli r6, r4, 0xf0 */ // 0x808C1E94
    /* li r4, 6 */ // 0x808C1E98
    r0 = *(0x1780 + r3); // lwz @ 0x808C1E9C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x808C1EA4
    r3 = *(0 + r5); // lwz @ 0x808C1EA8
    r0 = *(0x1780 + r3); // lwz @ 0x808C1EAC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x808C1EB4
    r0 = *(0 + r5); // lwz @ 0x808C1EB8
    r3 = r0 + r6; // 0x808C1EBC
    *(0xce4 + r3) = r31; // stw @ 0x808C1EC0
    r0 = *(0 + r5); // lwz @ 0x808C1EC4
    r3 = r0 + r6; // 0x808C1EC8
    *(0xdd4 + r3) = r31; // stw @ 0x808C1ECC
    r0 = *(0 + r5); // lwz @ 0x808C1ED0
    r3 = r0 + r6; // 0x808C1ED4
    *(0xec4 + r3) = r31; // stw @ 0x808C1ED8
    r0 = *(0 + r5); // lwz @ 0x808C1EDC
    r3 = r0 + r6; // 0x808C1EE0
    *(0xfb4 + r3) = r31; // stw @ 0x808C1EE4
    r0 = *(0 + r5); // lwz @ 0x808C1EE8
    r3 = r0 + r6; // 0x808C1EEC
    *(0x10a4 + r3) = r31; // stw @ 0x808C1EF0
    r0 = *(0 + r5); // lwz @ 0x808C1EF4
    r3 = r0 + r6; // 0x808C1EF8
    *(0x1194 + r3) = r31; // stw @ 0x808C1EFC
    /* mulli r6, r4, 0xf0 */ // 0x808C1F00
    r0 = *(0 + r5); // lwz @ 0x808C1F04
    r3 = r0 + r6; // 0x808C1F08
    *(0xce4 + r3) = r31; // stw @ 0x808C1F0C
    r0 = *(0 + r5); // lwz @ 0x808C1F10
    r3 = r0 + r6; // 0x808C1F14
    *(0xdd4 + r3) = r31; // stw @ 0x808C1F18
    r0 = *(0 + r5); // lwz @ 0x808C1F1C
    r3 = r0 + r6; // 0x808C1F20
    *(0xec4 + r3) = r31; // stw @ 0x808C1F24
    r0 = *(0 + r5); // lwz @ 0x808C1F28
    r3 = r0 + r6; // 0x808C1F2C
    *(0xfb4 + r3) = r31; // stw @ 0x808C1F30
    r0 = *(0 + r5); // lwz @ 0x808C1F34
    r3 = r0 + r6; // 0x808C1F38
    *(0x10a4 + r3) = r31; // stw @ 0x808C1F3C
    r0 = *(0 + r5); // lwz @ 0x808C1F40
    r3 = r0 + r6; // 0x808C1F44
    *(0x1194 + r3) = r31; // stw @ 0x808C1F48
    r31 = *(0x1c + r1); // lwz @ 0x808C1F4C
    r30 = *(0x18 + r1); // lwz @ 0x808C1F50
    r0 = *(0x24 + r1); // lwz @ 0x808C1F54
    return;
}