function initializeDropdowns() {

    if ($('#projectDropdown').length && $.fn.multiselect) {
        $('#projectDropdown').multiselect({
            includeSelectAllOption: true,
            enableFiltering: true,
            enableHTML: true,
            maxHeight: 0,
            enableCaseInsensitiveFiltering: true,
            buttonClass: 'btn btn-sm border',
            buttonWidth: '100%',
            nonSelectedText: 'Select projects',
            allSelectedText: 'All Project Selected',
            selectAllText: 'Select All',
            filterPlaceholder: 'Search Project....',
            templates: {
                li: '<li><a tabindex="0"><label style="display: flex; align-items: center; width: 100%;"></label></a></li>',
            },

            optionLabel: function (element) {
                let $opt = $(element);
                let displayText = $opt.text();
                return `
                <span style="flex: 1;">${displayText}</span>
            `;
            },
            onInitialized: function (select, container) {
                
            },
            onChange: function (option, checked) {
                
            }
        });
    }
    else {
        console.error('Bootstrap Multiselect not loaded or projectDropdown element not found');
    }
}