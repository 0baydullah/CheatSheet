
    // ==========================================================
    // 🔹 DYNAMIC EXCEL EXPORT
    // ==========================================================
    function exportExcel(data, reportType) {

        if (!data || !data.length) {
            showFallbackAlert("warning", "No data found to export.", "Warning");
            return;
        }

        // Custom Column Name Mapping
        const columnTitleMap = {
            empdesc: "Team",
            projectdesc: "Project"
            // Add more overrides here if needed
        };

        // Exclude specific columns
        const excludeColumns = [
            "comcod",
            "empid",
            "project"
            // add more keys to exclude here
        ];

        const keys = Object.keys(data[0]).filter(key => !excludeColumns.includes(key));

        // Build export data dynamically
        const exportData = data.map((row, index) => {

            const mappedRow = {};

            mappedRow["SL"] = index + 1;

            keys.forEach(key => {

                const columnTitle =
                    columnTitleMap[key] || key;

                mappedRow[columnTitle] =
                    row[key] != null ? row[key] : "";

            });

            return mappedRow;
        });

        // Export
        exportToExcel({
            data: exportData,
            headers: Object.keys(exportData[0]),
            fileName: `${reportType}_Active_Lead_Report_${new Date().toISOString().slice(0, 19).replace(/[-:T]/g, "")}.xlsx`
        });

        showFallbackAlert("success", `${reportType} Excel exported successfully!`, "");
    }


    // Bind export function to buttons
    $(document).on('click', '#ExcelExport', function () {
        exportExcel(teamWiseData, 'TeamWise');
        exportExcel(projWiseData, 'ProjectWise');
    });