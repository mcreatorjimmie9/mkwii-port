/* Function at 0x80670D2C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_80670D2C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r4, 4 */ // 0x80670D34
    r3 = r3 + 0x98; // 0x80670D38
    *(0x14 + r1) = r0; // stw @ 0x80670D3C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80670D44
    /* li r4, 0 */ // 0x80670D48
    /* lfs f1, 0(r5) */ // 0x80670D4C
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80670D54
    return;
}