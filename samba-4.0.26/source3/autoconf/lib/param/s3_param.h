#ifndef __AUTOCONF_LIB_PARAM_S3_PARAM_H__
#define __AUTOCONF_LIB_PARAM_S3_PARAM_H__

/* This file was automatically generated by mks3param.pl. DO NOT EDIT */

struct loadparm_s3_helpers
{
	const char * (*get_parametric)(struct loadparm_service *, const char *type, const char *option);
	struct parm_struct * (*get_parm_struct)(const char *param_name);
	void * (*get_parm_ptr)(struct loadparm_service *service, struct parm_struct *parm);
	struct loadparm_service * (*get_service)(const char *service_name);
	struct loadparm_service * (*get_default_loadparm_service)(void);
	struct loadparm_service * (*get_servicebynum)(int snum);
	int (*get_numservices)(void);
	bool (*load)(const char *filename);
	bool (*set_cmdline)(const char *pszParmName, const char *pszParmValue);
	void (*dump)(FILE *f, bool show_defaults, int maxtoprint);
	bool  (*readraw)(void);
	bool  (*writeraw)(void);
	const char * (*cachedir)(void);
	const char * (*statedir)(void);
	const char * (*pathname)(void);
	const char ** (*hostsallow)(void);
	const char ** (*hostsdeny)(void);
	const char * (*fstype)(void);
	const char ** (*ntvfs_handler)(void);
	bool  (*msdfs_root)(void);
	bool  (*browseable)(void);
	bool  (*readonly)(void);
	bool  (*print_ok)(void);
	bool  (*map_hidden)(void);
	bool  (*map_archive)(void);
	bool  (*oplocks)(void);
	bool  (*strict_sync)(void);
	bool  (*map_system)(void);
	int  (*max_connections)(void);
	int  (*csc_policy)(void);
	int  (*create_mask)(void);
	int  (*force_create_mode)(void);
	int  (*dir_mask)(void);
	int  (*force_dir_mode)(void);
	const char * (*preexec)(void);
	const char * (*postexec)(void);
	const char * (*rootpreexec)(void);
	const char * (*rootpostexec)(void);
	const char * (*dontdescend)(void);
	const char * (*username)(void);
	const char ** (*invalid_users)(void);
	const char ** (*valid_users)(void);
	const char ** (*admin_users)(void);
	const char * (*printcommand)(void);
	const char * (*lpqcommand)(void);
	const char * (*lprmcommand)(void);
	const char * (*lppausecommand)(void);
	const char * (*lpresumecommand)(void);
	const char * (*queuepausecommand)(void);
	const char * (*queueresumecommand)(void);
	const char * (*printjob_username)(void);
	const char * (*magicscript)(void);
	const char * (*magicoutput)(void);
	const char * (*comment)(void);
	const char * (*force_user)(void);
	const char * (*force_group)(void);
	const char ** (*readlist)(void);
	const char ** (*writelist)(void);
	const char ** (*printer_admin)(void);
	const char ** (*vfs_objects)(void);
	const char * (*msdfs_proxy)(void);
	const char * (*veto_files)(void);
	const char * (*hide_files)(void);
	const char * (*veto_oplocks)(void);
	const char * (*aio_write_behind)(void);
	const char * (*dfree_command)(void);
	bool  (*autoloaded)(void);
	bool  (*preexec_close)(void);
	bool  (*rootpreexec_close)(void);
	int  (*casesensitive)(void);
	bool  (*preservecase)(void);
	bool  (*shortpreservecase)(void);
	bool  (*hide_dot_files)(void);
	bool  (*hide_special_files)(void);
	bool  (*hideunreadable)(void);
	bool  (*hideunwriteable_files)(void);
	bool  (*access_based_share_enum)(void);
	bool  (*no_set_dir)(void);
	bool  (*guest_ok)(void);
	bool  (*guest_only)(void);
	bool  (*administrative_share)(void);
	bool  (*print_notify_backchannel)(void);
	bool  (*store_dos_attributes)(void);
	bool  (*dmapi_support)(void);
	bool  (*kernel_oplocks)(void);
	bool  (*level2_oplocks)(void);
	bool  (*kernel_share_modes)(void);
	bool  (*onlyuser)(void);
	bool  (*symlinks)(void);
	bool  (*syncalways)(void);
	bool  (*strict_allocate)(void);
	bool  (*delete_readonly)(void);
	bool  (*fake_oplocks)(void);
	bool  (*recursive_veto_delete)(void);
	bool  (*dos_filemode)(void);
	bool  (*dos_filetimes)(void);
	bool  (*dos_filetime_resolution)(void);
	bool  (*fake_dir_create_times)(void);
	bool  (*blocking_locks)(void);
	bool  (*inherit_perms)(void);
	bool  (*inherit_acls)(void);
	bool  (*inherit_owner)(void);
	bool  (*use_client_driver)(void);
	bool  (*default_devmode)(void);
	bool  (*force_printername)(void);
	bool  (*nt_acl_support)(void);
	bool  (*force_unknown_acl_user)(void);
	bool  (*ea_support)(void);
	bool  (*_use_sendfile)(void);
	bool  (*profile_acls)(void);
	bool  (*map_acl_inherit)(void);
	bool  (*afs_share)(void);
	bool  (*acl_check_permissions)(void);
	bool  (*acl_group_control)(void);
	bool  (*acl_map_full_control)(void);
	bool  (*acl_allow_execute_always)(void);
	int  (*defaultcase)(void);
	int  (*minprintspace)(void);
	int  (*printing)(void);
	int  (*max_reported_jobs)(void);
	int  (*oplock_contention_limit)(void);
	int  (*write_cache_size)(void);
	int  (*block_size)(void);
	int  (*dfree_cache_time)(void);
	int  (*allocation_roundup_size)(void);
	int  (*aio_read_size)(void);
	int  (*aio_write_size)(void);
	int  (*map_readonly)(void);
	int  (*directory_name_cache_size)(void);
	int  (*smb_encrypt)(void);
	char  (*magicchar)(void);
	const char * (*cups_options)(void);
	bool  (*durable_handles)(void);
	bool  (*allow_insecure_widelinks)(void);
	bool  (*allow_trusted_domains)(void);
	bool  (*async_smb_echo_handler)(void);
	bool  (*bind_interfaces_only)(void);
	bool  (*browse_list)(void);
	bool  (*client_lanman_auth)(void);
	bool  (*client_ntlmv2_auth)(void);
	bool  (*client_plaintext_auth)(void);
	bool  (*client_use_spnego)(void);
	bool  (*client_use_spnego_principal)(void);
	bool  (*clustering)(void);
	bool  (*create_krb5_conf)(void);
	bool  (*debug_class)(void);
	bool  (*debug_hires_timestamp)(void);
	bool  (*debug_pid)(void);
	bool  (*debug_prefix_timestamp)(void);
	bool  (*debug_uid)(void);
	bool  (*defer_sharing_violations)(void);
	bool  (*disable_netbios)(void);
	bool  (*_disable_spoolss)(void);
	bool  (*_domain_logons)(void);
	bool  (*enable_asu_support)(void);
	bool  (*enable_core_files)(void);
	bool  (*enable_privileges)(void);
	bool  (*encrypted_passwords)(void);
	bool  (*enhanced_browsing)(void);
	bool  (*getwd_cache)(void);
	bool  (*host_msdfs)(void);
	bool  (*hostname_lookups)(void);
	bool  (*lanman_auth)(void);
	bool  (*large_readwrite)(void);
	bool  (*ldap_delete_dn)(void);
	bool  (*ldap_ssl_ads)(void);
	bool  (*load_printers)(void);
	bool  (*local_master)(void);
	bool  (*log_writeable_files_on_exit)(void);
	bool  (*map_untrusted_to_domain)(void);
	bool  (*ms_add_printer_wizard)(void);
	bool  (*multicast_dns_register)(void);
	bool  (*nis_home_map)(void);
	bool  (*nmbd_bind_explicit_broadcast)(void);
	bool  (*ntlm_auth)(void);
	bool  (*nt_pipe_support)(void);
	bool  (*nt_status_support)(void);
	bool  (*null_passwords)(void);
	bool  (*obey_pam_restrictions)(void);
	bool  (*pam_password_change)(void);
	bool  (*passdb_expand_explicit)(void);
	bool  (*passwd_chat_debug)(void);
	bool  (*registry_shares)(void);
	bool  (*reset_on_zero_vc)(void);
	bool  (*rpc_big_endian)(void);
	bool  (*stat_cache)(void);
	bool  (*syslog_only)(void);
	bool  (*timestamp_logs)(void);
	bool  (*time_server)(void);
	bool  (*tls_enabled)(void);
	bool  (*unicode)(void);
	bool  (*unix_extensions)(void);
	bool  (*unix_password_sync)(void);
	bool  (*use_mmap)(void);
	bool  (*usershare_allow_guests)(void);
	bool  (*usershare_owner_only)(void);
	bool  (*use_spnego)(void);
	bool  (*utmp)(void);
	bool  (*we_are_a_wins_server)(void);
	bool  (*winbind_enum_groups)(void);
	bool  (*winbind_enum_users)(void);
	bool  (*winbind_nested_groups)(void);
	bool  (*winbind_normalize_names)(void);
	bool  (*winbind_offline_logon)(void);
	bool  (*winbind_refresh_tickets)(void);
	bool  (*winbind_rpc_only)(void);
	bool  (*winbind_sealed_pipes)(void);
	bool  (*winbind_trusted_domains_only)(void);
	bool  (*winbind_use_default_domain)(void);
	bool  (*wins_dns_proxy)(void);
	bool  (*wins_proxy)(void);
	const char * (*afs_username_map)(void);
	const char * (*ctdbd_socket)(void);
	const char * (*dedicated_keytab_file)(void);
	const char * (*dnsdomain)(void);
	const char * (*dns_forwarder)(void);
	const char * (*dos_charset)(void);
	const char * (*guestaccount)(void);
	const char * (*idmap_backend)(void);
	const char * (*lockdir)(void);
	const char * (*logon_drive)(void);
	const char * (*logon_home)(void);
	const char * (*logon_path)(void);
	const char * (*logon_script)(void);
	const char * (*nbt_client_socket_address)(void);
	const char * (*ncalrpc_dir)(void);
	const char * (*netbios_name)(void);
	const char * (*netbios_scope)(void);
	const char * (*ntp_signd_socket_directory)(void);
	const char * (*passdb_backend)(void);
	const char * (*passwordserver)(void);
	const char * (*piddir)(void);
	const char * (*private_dir)(void);
	const char * (*realm)(void);
	const char * (*smb_passwd_file)(void);
	const char * (*socket_options)(void);
	const char * (*template_homedir)(void);
	const char * (*template_shell)(void);
	const char * (*unix_charset)(void);
	const char * (*utmpdir)(void);
	const char * (*winbindd_privileged_socket_directory)(void);
	const char * (*winbindd_socket_directory)(void);
	const char * (*winbind_separator)(void);
	const char * (*workgroup)(void);
	const char * (*wtmpdir)(void);
	int  (*afs_token_lifetime)(void);
	int  (*algorithmic_rid_base)(void);
	int  (*allow_dns_updates)(void);
	int  (*cldap_port)(void);
	int  (*client_ldap_sasl_wrapping)(void);
	int  (*client_schannel)(void);
	int  (*client_signing)(void);
	int  (*cli_maxprotocol)(void);
	int  (*cli_minprotocol)(void);
	int  (*config_backend)(void);
	int  (*ctdb_locktime_warn_threshold)(void);
	int  (*ctdb_timeout)(void);
	int  (*cups_connection_timeout)(void);
	int  (*deadtime)(void);
	int  (*dgram_port)(void);
	int  (*_domain_master)(void);
	int  (*idmap_cache_time)(void);
	int  (*idmap_negative_cache_time)(void);
	int  (*init_logon_delay)(void);
	int  (*keepalive)(void);
	int  (*kerberos_method)(void);
	int  (*kpasswd_port)(void);
	int  (*krb5_port)(void);
	int  (*ldap_connection_timeout)(void);
	int  (*ldap_debug_level)(void);
	int  (*ldap_debug_threshold)(void);
	int  (*ldap_deref)(void);
	int  (*ldap_follow_referral)(void);
	int  (*ldap_page_size)(void);
	int  (*ldap_passwd_sync)(void);
	int  (*ldap_replication_sleep)(void);
	int  (*ldap_ssl)(void);
	int  (*ldap_timeout)(void);
	int  (*lm_announce)(void);
	int  (*lm_interval)(void);
	int  (*lock_spin_time)(void);
	int  (*lpqcachetime)(void);
	int  (*machine_password_timeout)(void);
	int  (*mangle_prefix)(void);
	int  (*map_to_guest)(void);
	int  (*maxdisksize)(void);
	int  (*max_log_size)(void);
	int  (*maxmux)(void);
	int  (*max_open_files)(void);
	int  (*max_smbd_processes)(void);
	int  (*max_stat_cache_size)(void);
	int  (*max_ttl)(void);
	int  (*max_wins_ttl)(void);
	int  (*max_xmit)(void);
	int  (*min_wins_ttl)(void);
	int  (*name_cache_timeout)(void);
	int  (*nbt_port)(void);
	int  (*open_files_db_hash_size)(void);
	int  (*oplock_break_wait_time)(void);
	int  (*os_level)(void);
	int  (*passwd_chat_timeout)(void);
	int  (*passwordlevel)(void);
	int  (*printcap_cache_time)(void);
	int  (*restrict_anonymous)(void);
	int  (*_security)(void);
	int  (*_server_role)(void);
	int  (*server_schannel)(void);
	int  (*server_signing)(void);
	int  (*smb2_max_read)(void);
	int  (*smb2_max_trans)(void);
	int  (*smb2_max_write)(void);
	int  (*srv_maxprotocol)(void);
	int  (*srv_minprotocol)(void);
	int  (*syslog)(void);
	int  (*usernamelevel)(void);
	int  (*username_map_cache_time)(void);
	int  (*usershare_max_shares)(void);
	int  (*web_port)(void);
	int  (*winbind_cache_time)(void);
	int  (*winbind_expand_groups)(void);
	int  (*winbind_max_clients)(void);
	int  (*winbind_reconnect_delay)(void);
	int  (*winbind_request_timeout)(void);
	const char ** (*auth_methods)(void);
	const char ** (*cluster_addresses)(void);
	const char ** (*dcerpc_endpoint_servers)(void);
	const char ** (*dns_update_command)(void);
	const char ** (*eventlog_list)(void);
	const char ** (*init_logon_delayed_hosts)(void);
	const char ** (*interfaces)(void);
	const char ** (*name_resolve_order)(void);
	const char ** (*netbios_aliases)(void);
	const char ** (*nsupdate_command)(void);
	const char ** (*preload_modules)(void);
	const char ** (*rndc_command)(void);
	const char ** (*samba_kcc_command)(void);
	const char ** (*server_services)(void);
	const char ** (*smb_ports)(void);
	const char ** (*spn_update_command)(void);
	const char ** (*svcctl_list)(void);
	const char ** (*usershare_prefix_allow_list)(void);
	const char ** (*usershare_prefix_deny_list)(void);
	const char ** (*winbind_nss_info)(void);
	const char ** (*wins_server_list)(void);
	const char * (*abort_shutdown_script)(void);
	const char * (*addgroup_script)(void);
	const char * (*addmachine_script)(void);
	const char * (*addport_cmd)(void);
	const char * (*addprinter_cmd)(void);
	const char * (*add_share_cmd)(void);
	const char * (*adduser_script)(void);
	const char * (*addusertogroup_script)(void);
	const char * (*auto_services)(void);
	const char * (*change_share_cmd)(void);
	const char * (*check_password_script)(void);
	const char * (*cups_server)(void);
	const char * (*defaultservice)(void);
	const char * (*deleteprinter_cmd)(void);
	const char * (*delete_share_cmd)(void);
	const char * (*delgroup_script)(void);
	const char * (*deluserfromgroup_script)(void);
	const char * (*deluser_script)(void);
	const char * (*enumports_cmd)(void);
	const char * (*get_quota_command)(void);
	const char * (*iprint_server)(void);
	const char * (*ldap_admin_dn)(void);
	const char * (*ldap_suffix)(void);
	const char * (*logfile)(void);
	const char * (*log_nt_token_command)(void);
	const char * (*mangling_method)(void);
	const char * (*msg_command)(void);
	const char * (*nis_home_map_name)(void);
	const char * (*os2_driver_map)(void);
	const char * (*panic_action)(void);
	const char * (*passwd_chat)(void);
	const char * (*passwd_program)(void);
	const char * (*perfcount_module)(void);
	const char * (*remote_announce)(void);
	const char * (*remote_browse_sync)(void);
	const char * (*renameuser_script)(void);
	const char * (*rootdir)(void);
	const char * (*serverstring)(void);
	const char * (*setprimarygroup_script)(void);
	const char * (*set_quota_command)(void);
	const char * (*share_backend)(void);
	const char * (*shutdown_script)(void);
	const char * (*username_map_script)(void);
	const char * (*username_map)(void);
	const char * (*usershare_path)(void);
	const char * (*wins_hook)(void);
};
#endif /* __AUTOCONF_LIB_PARAM_S3_PARAM_H__ */
