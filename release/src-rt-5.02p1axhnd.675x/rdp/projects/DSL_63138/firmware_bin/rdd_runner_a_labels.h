#ifndef RUNNER_A_CODE_ADDRESSES
#define RUNNER_A_CODE_ADDRESSES

#define runner_a_start_task_initialization_task		(0x14)
#define runner_a_initialization_task		(0x14)
#define runner_a_start_task_timer_scheduler_set		(0x3860)
#define runner_a_timer_scheduler_set		(0x3860)
#define runner_a_start_task_cpu_rx_wakeup_request		(0x2624)
#define runner_a_cpu_rx_wakeup_request		(0x2624)
#define runner_a_start_task_flow_cache_wakeup_request		(0xE94)
#define runner_a_flow_cache_wakeup_request		(0xE94)
#define runner_a_start_task_cpu_tx_wakeup_request		(0x2DD0)
#define runner_a_cpu_tx_wakeup_request		(0x2DD0)
#define runner_a_start_task_policer_budget_allocator_1st_wakeup_request		(0x3994)
#define runner_a_policer_budget_allocator_1st_wakeup_request		(0x3994)
#define runner_a_start_task_wan_direct_wakeup_request		(0x1888)
#define runner_a_wan_direct_wakeup_request		(0x1888)
#define runner_a_start_task_wan_cpu_wakeup_request		(0x204)
#define runner_a_wan_cpu_wakeup_request		(0x204)
#define runner_a_start_task_wan_normal_wakeup_request		(0x3C8)
#define runner_a_wan_normal_wakeup_request		(0x3C8)
#define runner_a_start_task_downstream_multicast_wakeup_request		(0x3310)
#define runner_a_downstream_multicast_wakeup_request		(0x3310)
#define runner_a_start_task_debug_routine		(0x11C)
#define runner_a_debug_routine		(0x11C)
#define runner_a_start_task_free_skb_index_wakeup_request		(0x3960)
#define runner_a_free_skb_index_wakeup_request		(0x3960)
#define runner_a_free_skb_index_tx_abs_done		(0x3960)
#define runner_a_start_task_dhd_tx_post		(0x4418)
#define runner_a_dhd_tx_post		(0x4418)
#define runner_a_start_task_dhd_tx_complete_wakeup_request		(0x483C)
#define runner_a_dhd_tx_complete_wakeup_request		(0x483C)
#define runner_a_dhd_tx_complete_check_next		(0x483C)
#define runner_a_start_task_ipsec_ds_wakeup_request		(0x3C9C)
#define runner_a_ipsec_ds_wakeup_request		(0x3C9C)
#define runner_a_start_task_ethwan2_normal_wakeup_request		(0x260)
#define runner_a_ethwan2_normal_wakeup_request		(0x260)
#define runner_a_gpe_sop_push_replace_ddr_sram_32		(0x1A44)
#define runner_a_gpe_sop_push_replace_sram_32_64		(0x1AB8)
#define runner_a_gpe_sop_push_replace_sram_64		(0x1ACC)
#define runner_a_gpe_sop_push_replace_sram_64_32		(0x1AE0)
#define runner_a_gpe_sop_pull_replace_ddr_sram_32		(0x1AF4)
#define runner_a_gpe_sop_pull_replace_sram_32_64		(0x1B68)
#define runner_a_gpe_sop_pull_replace_sram_64		(0x1BB8)
#define runner_a_gpe_sop_pull_replace_sram_64_32		(0x1BF4)
#define runner_a_gpe_replace_pointer_32_ddr		(0x1C44)
#define runner_a_gpe_replace_pointer_32_sram		(0x1C68)
#define runner_a_gpe_replace_pointer_64_sram		(0x1C8C)
#define runner_a_gpe_replace_16		(0x1CB0)
#define runner_a_gpe_replace_32		(0x1CE4)
#define runner_a_gpe_replace_bits_16		(0x1D08)
#define runner_a_gpe_copy_add_16_cl		(0x1D34)
#define runner_a_gpe_copy_add_16_sram		(0x1D40)
#define runner_a_gpe_copy_bits_16_cl		(0x1D88)
#define runner_a_gpe_copy_bits_16_sram		(0x1D94)
#define runner_a_gpe_insert_16		(0x1DDC)
#define runner_a_gpe_delete_16		(0x1E44)
#define runner_a_gpe_decrement_8		(0x1E84)
#define runner_a_gpe_apply_icsum_16		(0x1EA8)
#define runner_a_gpe_apply_icsum_nz_16		(0x1ECC)
#define runner_a_gpe_compute_csum_16_cl		(0x1F08)
#define runner_a_gpe_compute_csum_16_sram		(0x1F14)
#define runner_a_gpe_buffer_copy_16_sram		(0x1F54)
#define runner_a_gpe_buffer_copy_16_ddr		(0x1F7C)
#define runner_a_ingress_classification_key_src_ip		(0x2184)
#define runner_a_ingress_classification_key_dst_ip		(0x21C8)
#define runner_a_ingress_classification_key_ipv6_flow_label		(0x220C)
#define runner_a_ingress_classification_key_generic_rule_1		(0x2230)
#define runner_a_ingress_classification_key_generic_rule_2		(0x2238)
#define runner_a_ingress_classification_key_outer_tpid		(0x22A4)
#define runner_a_ingress_classification_key_inner_tpid		(0x22B0)
#define runner_a_ingress_classification_key_src_port		(0x22CC)
#define runner_a_ingress_classification_key_dst_port		(0x22EC)
#define runner_a_ingress_classification_key_outer_vlan		(0x230C)
#define runner_a_ingress_classification_key_inner_vlan		(0x2324)
#define runner_a_ingress_classification_key_dst_mac		(0x2340)
#define runner_a_ingress_classification_key_src_mac		(0x2348)
#define runner_a_ingress_classification_key_ether_type		(0x2370)
#define runner_a_ingress_classification_key_ip_protocol		(0x2384)
#define runner_a_ingress_classification_key_dscp		(0x23A8)
#define runner_a_ingress_classification_key_ssid		(0x23C4)
#define runner_a_ingress_classification_key_ingress_port		(0x23C8)
#define runner_a_ingress_classification_key_outer_pbits		(0x23D8)
#define runner_a_ingress_classification_key_inner_pbits		(0x23F0)
#define runner_a_ingress_classification_key_number_of_vlans		(0x240C)
#define runner_a_ingress_classification_key_layer3_protocol		(0x241C)
#define runner_a_cpu_rx_meter_budget_allocate		(0x38E0)
#define runner_a_dhd_tx_post_close_aggregation		(0x392C)
#define runner_a_schedule_free_skb_index		(0x3944)

#endif
