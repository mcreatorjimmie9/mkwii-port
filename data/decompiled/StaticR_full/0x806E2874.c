/* Function at 0x806E2874, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_806E2874(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x806E287C
    r3 = r3 + 0x98; // 0x806E2880
    *(0x14 + r1) = r0; // stw @ 0x806E2884
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806E288C
    /* li r4, 0 */ // 0x806E2890
    /* lfs f1, 0(r5) */ // 0x806E2894
    FUN_8069F7A0(r5, r4); // bl 0x8069F7A0
    r0 = *(0x14 + r1); // lwz @ 0x806E289C
    return;
}